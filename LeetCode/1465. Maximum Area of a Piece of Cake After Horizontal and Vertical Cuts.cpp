class Solution {
    const  int M = 1e9 + 7;
    typedef long long ll;
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        ll a = hc[0], b = vc[0];
        int n = hc.size();
        for(int i = 0; i<n -1; i++)
        {
            ll tm = abs(hc[i] - hc[i+1]);
            a = max(tm, a);
        }
        ll x =abs(h - hc[n-1]);
        a = max(x,a);
        n = vc.size();
        for(int i = 0; i<n -1; i++)
        {
            ll tm = abs(vc[i] - vc[i+1]);
            b = max(tm, b);
        }
        x = abs(w - vc[n-1]);
        b = max(x,b);
        ll  ans = a*b;
        int res = ans%M;
        return res;
    }
};