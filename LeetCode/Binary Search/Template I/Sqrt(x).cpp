class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int mySqrt(int x) {
        int low = 0, high = x;
        if(x == 1) return 1;
        while(high - low > 1)
        {
            long long int mid = low + (high - low)/2;
            if(mid * mid > x)
            	high = mid;
            else
            	low = mid;
        }
        return low;
    }
};