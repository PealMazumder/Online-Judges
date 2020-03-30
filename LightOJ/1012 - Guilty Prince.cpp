#include<bits/stdc++.h>
#define fast                        			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define all(p)						p.begin(),p.end()
#define mem(ar, val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI                      			freopen("input.txt", "r", stdin);
#define FO                      			freopen("output.txt", "w", stdout);

using namespace std;
const int INF = 0x7f7f7f7f;
const int mx = 22;
struct node
{
	int xx,yy;
}v;

char place[mx][mx];
bool vis[mx][mx];
queue<node> q;
int bfs(int ix, int iy)
{
	int ans = 0;
	node tm;
	q = queue<node>();
	tm.xx = ix; tm.yy = iy;
	q.push(tm);
	vis[tm.xx][tm.yy] = true;
	while(!q.empty())
	{
		v = q.front();
		q.pop();
		if(place[v.xx-1][v.yy] == '.' && vis[v.xx-1][v.yy] == false)
		{
			tm.xx = v.xx-1; tm.yy = v.yy;
			q.push(tm);
			vis[v.xx-1][v.yy] = true;
		}
		if(place[v.xx+1][v.yy] == '.' && vis[v.xx+1][v.yy] == false)
		{
			tm.xx = v.xx+1; tm.yy = v.yy;
			q.push(tm);
			vis[v.xx+1][v.yy] = true;
		}
		if(place[v.xx][v.yy-1] == '.' && vis[v.xx][v.yy-1] == false)
		{
			tm.xx = v.xx; tm.yy = v.yy-1;
			q.push(tm);
			vis[v.xx][v.yy-1] = true;
		}
		if(place[v.xx][v.yy+1] == '.' && vis[v.xx][v.yy+1] == false)
		{
			tm.xx = v.xx; tm.yy = v.yy+1;
			q.push(tm);
			vis[v.xx][v.yy+1] = true;
		}
		ans++;
	}
	return ans;
}
int main()
{
	int t,casino = 0;
	scanf("%d",&t);
	while(t--)
	{
		int w,h,ix = 0, iy = 0;
		scanf("%d%d",&w,&h);
		
		for(int i = 0;i<mx;i++)
			for(int j =  0;j<mx;j++)
			{
				place[i][j] = '0';
				vis[i][j] = false;
			}
			
	
		for(int i = 1;i<=h;i++)
		{
			char in[21];
			scanf("%s",&in);
			for(int j = 1, k = 0; k<w; j++,k++)
			{
				place[i][j] = in[k];
				if(place[i][j] == '@')
				{
					ix = i;
					iy = j;
				}
			}
		}

		//printf("%d %d",ix,iy);
		int res = bfs(ix,iy);
		printf("Case %d: %d\n",++casino,res);
	}

    return 0;
}

