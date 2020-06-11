class Solution {
public:
    string minWindow(string s, string t) {
        int ls = s.size(), lt = t.size();
        
        map<char, int> mt,ms;
        
        for(int i = 0; i<lt; i++)
            mt[t[i]]++;
        
        int l = 0, r = 0, cnt = 0, mn = INT_MAX, al = 0, ar = 0;
        while(r<ls)
        {
            if(mt[s[r]] > ms[s[r]])
                cnt++;
            
            ms[s[r]]++;
            r++;
            
            if(cnt == lt)
            {
                for(int i = l; i<=r; i++)
                {
                    if(mt[s[i]]<ms[s[i]])
                    {
                        ms[s[i]]--;
                        l++;
                    }
                    else break;
                    
                }
                int tm = r - l + 1;
                if(tm < mn)
                {
                    al = l; ar = r;
                    mn = tm;
                }
                ms[s[l]]--;
                l++;
                cnt--;
            }
        }
        if(ar == 0) return "";
        else return s.substr(al,mn-1);
    }
};