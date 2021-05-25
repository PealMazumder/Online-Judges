//Problem Link: https://cses.fi/problemset/task/1621/
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
    int n, x, i;
    cin>>n;
    set<int> st;

    for(i = 0; i < n; i++)
    {
        cin>>x;
        st.insert(x);
    }
    cout<<sz(st)<<nl;
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


