//Problem Link: https://cses.fi/problemset/task/1163/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
int casino = 0;
void solve()
{
    ll x, n, i, j;
    cin>>x>>n;
    vector<ll> ar(n);
    set<ll> st;
    st.insert(0);
    st.insert(x);
    map<ll, ll> mp;
    mp[x]++;
    for(i = 0; i < n; i++)
    {
        cin>>ar[i];
        auto it = st.lower_bound(ar[i]);
        auto r = it, l = --it;
        if(mp[*r - *l] == 1)
            mp.erase(*r - *l);
        else mp[*r - *l]--;
        mp[ar[i] - *l]++, mp[*r - ar[i]]++;
        st.insert(ar[i]);
        auto ans = mp.rbegin();
        cout<<ans->first<<" ";
    }
    cout<<nl;
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}


