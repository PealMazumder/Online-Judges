//Problem Link: https://cses.fi/problemset/task/1192
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
const int N = 1005;
int n, m;
char ar[N][N];
bool vis[N][N];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
bool isValid(int x, int y)
{
    if(x < 1 || y < 1 || x > n || y > m)
        return false;
    if(vis[x][y]) return false;
    if(ar[x][y] == '#') return false;
    return true;
}
void dfs(int x, int y)
{
    vis[x][y] = 1;
    for(int i = 0; i < 4; i++)
        if(isValid(x + dx[i], y + dy[i]))
            dfs(x + dx[i], y + dy[i]);
}

void solve()
{
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cin>>ar[i][j];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(isValid(i, j))
            {
                ans++;
                dfs(i, j);
            }
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


