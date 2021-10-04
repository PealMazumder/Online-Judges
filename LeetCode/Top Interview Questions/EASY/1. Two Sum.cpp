class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i = 0; i<n; i++)
        {
            int need = target - nums[i];
            if(mp.find(need) != mp.end())
            {
                res.push_back(mp[need]);
                res.push_back(i);
                return res;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};