//Problem Link: https://leetcode.com/problems/maximum-score-from-removing-substrings/
class Solution {
	using ll  = long long;
public:
    ll a = 0, b = 0, x, y;
    string removeAB(string s)
    {
        string str;
        str.push_back('#');
        int n = (int)s.size();
        for(int i = 0; i<n; i++)
        {
            if(s[i] == 'b' && str.back() == 'a')
                a += x, str.pop_back();
            else
                str.push_back(s[i]);
        }
        return str;
    }
    string removeBA(string s)
    {
        string str;
        str.push_back('#');
        int n = (int)s.size();
        for(int i = 0; i<n; i++)
        {
            if(s[i] == 'a' && str.back() == 'b')
                a += y, str.pop_back();
            else
                str.push_back(s[i]);
        }
        return str;
    }
    int maximumGain(string s, int xx, int yy) {
        x = xx, y = yy;
        if(xx >= yy)
        {
            string tm = removeAB(s);
            tm = removeBA(tm);
        }
        else
        {
            string tm = removeBA(s);
            tm = removeAB(tm);
        }
        return (a+b);
    }
};

//Using One Function
class Solution {
public:
    int removeABorBA(string&s, char c1, char c2)
    {
        int cnt = 0;
        string str;
        str.push_back('#');
        int n = (int)s.size();
        for(int i = 0; i<n; i++)
        {
            if(s[i] == c2 && str.back() == c1)
                cnt++, str.pop_back();
            else
                str.push_back(s[i]);
        }
        s = str;
        return cnt;
    }
    int maximumGain(string s, int x, int y) {
        int ans = 0;
        if(x >= y)
        {
            ans += x * removeABorBA(s, 'a', 'b');
            ans += y * removeABorBA(s, 'b', 'a');
        }
        else
        {
            ans += y * removeABorBA(s, 'b', 'a');
            ans += x * removeABorBA(s, 'a', 'b');
        }
        return ans;
    }
};


