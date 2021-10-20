class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 1; i < (int)nums.size(); i++)
        {
     
            if(nums[i-1] + nums[i] > nums[i]) 
                nums[i] = nums[i-1] + nums[i];
            ans = max(ans, nums[i]);
        }
        return ans;
    }
};