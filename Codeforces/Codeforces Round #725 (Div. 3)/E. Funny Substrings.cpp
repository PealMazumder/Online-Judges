#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
struct node{
    string pre, suf;
    ll cnt;
};
string getSuf(string s)
{
    string re = "";
    for(int i = sz(s) - 1, j = 0; i >= 0; i--, j++)
    {
        if(j == 3) break;
        else re += s[i];
    }
    reverse(re.begin(), re.end());
    return re;
}
string getPre(string s)
{
    string re = "";
    for(int i = 0; i<sz(s) && i < 3; i++)
        re += s[i];
    return re;
}
void solve()
{
    int n;
    cin>>n;
    string a, nxt, s, b , c;
    map<string, node> mp;
    while(n--)
    {
        b = "", c = "";
        cin>>a;
        cin.ignore();
        getline(cin, nxt);
        if(nxt[0] == ':')
        {
            s = nxt.substr(3);
            ll times = 0;
            for(int i = 0; i<sz(s)-3; i++)
            {
                if(s.substr(i, 4) == "haha") times++;
            }
            mp[a].cnt = times;
            mp[a].pre = getPre(s);
            mp[a].suf = getSuf(s);
        }
        else
        {
            int j;
            for(j = 2; j<sz(nxt); j++)
            {
                if(nxt[j] == ' ') break;
                else b += nxt[j];
            }
            j += 3;
            for(j = j; j<sz(nxt); j++)
                c += nxt[j];

            string cur = mp[b].suf + mp[c].pre;
            ll times = mp[b].cnt + mp[c].cnt;

            for(int i = 0; i<sz(cur)-3; i++)
            {
                if(cur.substr(i, 4) == "haha") times++;
            }
            mp[a].cnt = times;
            mp[a].pre = getPre(mp[b].pre + mp[c].pre);
            mp[a].suf = getSuf(mp[b].pre + mp[c].suf);
        }
    }
    cout<<mp[a].cnt<<nl;
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}