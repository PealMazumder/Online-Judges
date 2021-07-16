class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int singleNum = 0;
        for(int i = 0; i<n; i++)
            singleNum ^= nums[i];
        return singleNum;
    }
};