class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int mid,s,e;
        s = 0; e = n-1;
        while(s<=e)
        {
            mid = s + (e - s)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid]>target)
                e = mid-1;
            else
                s = mid + 1;
        }
        return -1;
    }
};