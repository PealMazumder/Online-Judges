class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int f = nums[n-1];
        int s = nums[n-2];
        return (f-1)*(s-1);
    }
};