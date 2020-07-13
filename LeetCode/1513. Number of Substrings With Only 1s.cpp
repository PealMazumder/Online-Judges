class Solution {
    const int M = 1e9 + 7;
public:
    int numSub(string s) {
        s += "0";
        long long ans = 0, cnt = 0;
        for(char x : s)
        {
            if(x == '0')
            {
                ans = (ans + (cnt*(cnt+1))/2) % M;
                cnt = 0;
            }
            else cnt++;
        }
        return ans;
    }
};