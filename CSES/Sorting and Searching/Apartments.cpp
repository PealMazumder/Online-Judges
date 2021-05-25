///Problem Link: https://cses.fi/problemset/task/1084/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
const ll INF = 1e18;
const ll MINF = -1e18;
void solve()
{
    ll n, m, k, i, j;
    cin>>n>>m>>k;
    ll ar[n];
    for(i = 0; i < n; i++)
        cin>>ar[i];
    sort(ar, ar + n);
    map<ll, ll> mp;
    set<ll> st;
    st.insert(INF);
    st.insert(MINF);
    for(i = 0; i < m; i++)
    {
        cin>>j;
        st.insert(j);
        mp[j]++;
    }
    int ans = 0;
    for(i = 0; i < n; i++)
    {
        auto it = st.lower_bound(ar[i] - k);
        if(abs(*it - ar[i]) <= k)
        {
            ans++;
            (mp[*it] > 1) ? mp[*it]-- : st.erase(*it);
        }
    }
    cout<<ans<<nl;
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


