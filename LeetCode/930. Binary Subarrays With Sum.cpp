class Solution {
public:
    int numSubarraysWithSum(vector<int>& ar, int s) {
        int n = ar.size();
        int i, sum = 0;
        int zeros[30005] = {0};
        int pre = 0;
        for(int i = n-1; i>=0; i--)
        {
            zeros[i] = pre;
            if(!ar[i]) pre++;
            else pre = 0;   	
        }
        bool ck = false;
        int  l = 0, r = -1, cnt = 0;
        int pos = 0;
        for(i = 0; i<n; i++)
        {
            sum += ar[i];
            if(sum>s)
            {
                sum = 0;
                l = i;
                while(ar[l] != 0 && l<n) l++;
                
                i = l-1;
                cout<<l<<" "<<i<<"\n";
            }
            else if(sum == s) 
            {
                int lc = 0,j;
                for(j = l; j<i; j++)
                {
                    if(ar[j] == 0) lc++;
                    else break;
                }
                cnt += (lc+1) * (zeros[i]+1);
                l = j+1;
                if(sum)
                    sum--;
            }
        }
        return cnt;
    }
};