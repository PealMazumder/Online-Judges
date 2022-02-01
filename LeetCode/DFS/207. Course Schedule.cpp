class Solution {
public:
    bool isCycle(vector<int> adj[], vector<int> &vis, int curr)
    {
        if(vis[curr] == 1) return true;
        
        if(vis[curr] == 0)
        {
            vis[curr] = 1;
            for(auto child : adj[curr])
                if(isCycle(adj, vis, child))
                    return true;
        }
        vis[curr] = 2; // vis[id] = 2 means there is no dependencies of that node
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        
        for(auto edge : prerequisites)
            adj[edge[0]].push_back(edge[1]);
        
        vector<int>vis(numCourses, 0);
        
        for(int i = 0; i < numCourses; i++)
        {
            if(isCycle(adj, vis, i))
                return false;
        }
        return true;
    }
};