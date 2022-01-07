//Problem Link: https://cses.fi/problemset/task/1669/
#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<int> adj[N];
bool vis[N];
int par[N];
int startingCity, intermediateCity;
bool dfs(int curr)
{
    vis[curr] = true;
    for(auto child : adj[curr])
    {
        if(!vis[child])
        {
            par[child] = curr;
            if(dfs(child) == true)
                return true;
        }
        else if(child != par[curr])
        {
            startingCity = child;
            intermediateCity = curr;
            return true;
        }
    }
    return false;
}
void print()
{
    vector<int> path;
    path.push_back(startingCity);
    int k = 2;
    while(intermediateCity != startingCity)
    {
        k++;
        path.push_back(intermediateCity);
        intermediateCity = par[intermediateCity];
    }
    path.push_back(startingCity);
    cout<<k<<"\n";
    for(auto it : path) cout<<it<<" ";
    cout<<"\n";
}
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    bool flag = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i] && dfs(i))
        {
            print();
            flag = 1;
            break;
        }
    }

    if(!flag) cout<<"IMPOSSIBLE\n";
    return 0;
}
