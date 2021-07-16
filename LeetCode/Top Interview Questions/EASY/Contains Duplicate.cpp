class Solution {
public:
    void mergeArr(vector<int> &ar, int st, int mid, int en)
    {
        int n = en - st + 1;
        int temp[n];

        int i = st, j = mid + 1, k = 0;

        while(i <= mid && j <= en)
        {
            if(ar[i] <= ar[j])
                temp[k] = ar[i], k++, i++;
            else
                temp[k] = ar[j], k++, j++;
        }

        while(i <= mid)
            temp[k] = ar[i], k++, i++;

        while(j <= en)
            temp[k] = ar[j], k++, j++;

        for(i = st; i <= en; i++)
            ar[i] = temp[i - st];
    }
    void mergeSort(vector<int> &ar, int st, int en)
    {
        if(st < en)
        {
            int mid = (st + en) / 2;
            mergeSort(ar, st, mid);
            mergeSort(ar, mid + 1, en);
            mergeArr(ar, st, mid, en);
        }
    }
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        mergeSort(nums, 0, n);
        
        for(int i = 1; i <= n; i++)
        {
            if(nums[i - 1] == nums[i]) return true;
        }
        return false;
    }
};