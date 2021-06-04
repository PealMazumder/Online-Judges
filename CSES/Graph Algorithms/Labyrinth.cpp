//Problem Link: https://cses.fi/problemset/task/1193
#include<bits/stdc++.h>
#define nl "\n"
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
const int N = 1005;
int n, m;
char ar[N][N];
struct parent{
    int a, b;
    char ch;
} par[N][N];
bool vis[N][N];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
char Dir[] = {'U', 'L',  'D', 'R'};
bool isValid(int x, int y)
{
    if(x < 1 || y < 1|| x > n || y > m)
        return false;
    if(ar[x][y] == '#') return false;
    if(vis[x][y]) return false;
    return true;
}
bool ck = 0;
void bfs(int x, int y)
{
    vis[x][y] = 1;
    queue<pair<int, int>> q;
    q.push({x, y});
    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        for(int i = 0; i<4; i++)
        {
            if(isValid(cur.ff + dx[i], cur.ss + dy[i]))
            {
                par[cur.ff + dx[i]][cur.ss + dy[i]].a = cur.ff;
                par[cur.ff + dx[i]][cur.ss + dy[i]].b = cur.ss;
                par[cur.ff + dx[i]][cur.ss + dy[i]].ch = Dir[i];
                q.push({cur.ff + dx[i], cur.ss + dy[i]});
                vis[cur.ff + dx[i]][cur.ss + dy[i]] = 1;
                if(ar[cur.ff + dx[i]][cur.ss + dy[i]] == 'B')
                    ck = 1;
            }
        }
        if(ck == 1) break;
    }
}
pair<int, int> st, en;
void printPath()
{
    int x = en.ff, y = en.ss;
    string ans = "";
    while(par[x][y].a != 0)
    {
        ans += par[x][y].ch;
        int tm = x;
        x = par[x][y].a;
        y = par[tm][y].b;
    }
    reverse(all(ans));
    cout<<sz(ans)<<nl<<ans<<nl;
}
void solve()
{
    cin>>n>>m;
    int x, y;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin>>ar[i][j];
            if(ar[i][j] == 'A') st.ff = i, st.ss = j;
            else if(ar[i][j] == 'B') en.ff = i, en.ss = j;
        }
    }
    par[st.ff][st.ss].a = 0;
    bfs(st.ff, st.ss);
    if(ck == 0)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        printPath();
    }

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


