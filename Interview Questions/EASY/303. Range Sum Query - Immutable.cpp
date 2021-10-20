class NumArray {
public:
    vector<int> pSum;
    NumArray(vector<int>& nums) {
        pSum.push_back(0);
        for(int i = 0; i<(int)nums.size(); i++)
            pSum.push_back(pSum.back() + nums[i]);
    }
    
    int sumRange(int left, int right) {
        return pSum[right+1] - pSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */