//Problem Link: https://cses.fi/problemset/task/1674/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
const int N = 200005;
vector<int> adj[N], sub(N);
void dfs(int n, int par)
{
    for(auto child : adj[n])
    {
        if(child != par)
        {
            dfs(child, n);
            sub[n] += sub[child] + 1;
        }
    }
}
void solve()
{
    int n, x;
    cin>>n;
    for(int i = 2; i <= n; i++)
    {
        cin>>x;
        adj[i].pb(x);
        adj[x].pb(i);
    }
    dfs(1, -1);
    for(int i = 1; i <= n; i++)
        cout<<sub[i]<<" ";
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


