class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        map<int, int> mp;
        for(int x : nums) mp[x]++;
        
        for(auto x: mp)
        {
            int occur = x.second;
            ans += (occur * (occur - 1))/2;
        }
        return ans;
    }
};