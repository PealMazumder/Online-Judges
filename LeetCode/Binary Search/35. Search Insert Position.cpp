class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size(), mid;
        
        while(left < right)
        {
            mid = (left + right)/2;
            
            if(nums[mid] <= target)
                left = mid + 1;
            else right = mid;
        }
        if(left - 1 >= 0 and nums[left-1] == target) return left-1;
        return left;
    }
};