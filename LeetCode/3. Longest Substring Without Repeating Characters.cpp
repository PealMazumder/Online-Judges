class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int flag[256] = {0};
        int l = 0, r = 0, ans = 0;
        while(r < n)
        {
            if(flag[s[r]] != 0)
            {
                ans = max(r - l, ans);
                while(l < flag[s[r]])
                {
                    flag[s[l]] = 0;
                    l++;
                }
            }
            flag[s[r]] = r + 1;
            r++;
        }
        ans = max(r - l, ans);
        return ans;
    }
};