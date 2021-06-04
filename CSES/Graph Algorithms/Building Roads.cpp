//Problem Link: https://cses.fi/problemset/task/1666/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
const int N = 1e5+5;
int n, m, a, b;
vector<int> adj[N];
vector<bool> vis(N);
void dfs(int n)
{
    vis[n] = 1;
    for(int child : adj[n])
    {
        if(!vis[child]) dfs(child);
    }
}
void solve()
{
    cin>>n>>m;
    for(int i = 0; i<m; i++)
        cin>>a>>b, adj[a].pb(b), adj[b].pb(a);
    int cnt = 0, last = 0;
    vector<pair<int, int>> path;
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            if(last != 0)
                cnt++, path.pb({last, i});
            last = i, dfs(i);
        }
    }
    cout<<cnt<<nl;
    for(auto it : path)
        cout<<it.first<<" "<<it.second<<nl;
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


