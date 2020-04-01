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
int main()
{
//	fast
	int tc;
	ll total = 0;
	scanf("%d",&tc);
	while(tc--)
	{
		int n;
		scanf("%d",&n);
		int v[4][4];
		for(int i = 0;i<4;i++)
			for(int j = 0;j<4;j++)
				v[i][j] = 0;
		for(int i = 0;i<n; i++)
		{
			char m;
			int t;
			scanf(" %c %d",&m,&t);
			if(t == 12)
			{
				v[m-'A'][0]++;
			}	
			else if(t == 3)
			{
				v[m-'A'][1]++;
			}
			else if(t == 6)
			{
				v[m-'A'][2]++;
			}
			else if(t == 9)
			{
				v[m-'A'][3]++;
			}
		}
		vector<vector<int> > com{{v[0][0],v[1][1],v[2][2],v[3][3]},
								{v[0][0],v[1][1],v[3][2],v[2][3]},
								{v[0][0],v[2][1],v[1][2],v[3][3]},
								{v[0][0],v[2][1],v[3][2],v[1][3]},
								{v[0][0],v[3][1],v[1][2],v[2][3]},
								{v[0][0],v[3][1],v[2][2],v[1][3]},
								{v[2][0],v[0][1],v[1][2],v[3][3]},
								{v[2][0],v[0][1],v[3][2],v[1][3]},
								{v[2][0],v[1][1],v[0][2],v[3][3]},
								{v[2][0],v[1][1],v[3][2],v[0][3]},
								{v[2][0],v[3][1],v[0][2],v[1][3]},
								{v[2][0],v[3][1],v[1][2],v[0][3]},
								{v[1][0],v[0][1],v[2][2],v[3][3]},
								{v[1][0],v[0][1],v[3][2],v[2][3]},
								{v[1][0],v[2][1],v[0][2],v[3][3]},
								{v[1][0],v[2][1],v[3][2],v[0][3]},
								{v[1][0],v[3][1],v[0][2],v[2][3]},
								{v[1][0],v[3][1],v[2][2],v[0][3]},
								{v[3][0],v[0][1],v[1][2],v[2][3]},
								{v[3][0],v[0][1],v[2][2],v[1][3]},
								{v[3][0],v[1][1],v[0][2],v[2][3]},
								{v[3][0],v[1][1],v[2][2],v[0][3]},
								{v[3][0],v[2][1],v[0][2],v[1][3]},
								{v[3][0],v[2][1],v[1][2],v[0][3]}
								};
								
		for(int i = 0; i<24; i++)
		{
			sort(com[i].begin(), com[i].end());
		}
		int cost[] = {100,75,50,25};
		ll mx = -INF;
		for(int i = 0; i<24; i++)
		{
			ll res = 0;
			for(int k = 0, j = 3; j>=0;k++, j--)
			{
				ll tem = (com[i][j] * cost[k]);
				if(tem!=0)
				{
					res += tem;
				}
				else
					res =res - 100;
			}
			mx = MAX(mx,res);
		}
		printf("%lld\n",mx);
		total += mx;
	}
	printf("%lld\n",total);
    return 0;
}
