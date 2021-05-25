///Problem Link: https://cses.fi/problemset/task/1090
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
    ll n, x, i, j;
    cin>>n>>x;
    ll ar[n];
    for(i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    sort(ar, ar + n);
    ll l = 0, r = n-1, ans = 0;
    while(l <= r)
    {
        if(l == r) ans++, l++;
        else if(ar[l] + ar[r] <= x)
            ans++, l++, r--;
        else ans++, r--;
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


