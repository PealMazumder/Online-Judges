#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define rep(i,n)                    for(int i = 1; i<=n; i++)
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define mkp(x,y)					make_pair(x,y)
#define ff						first
#define ss						second
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;

int main()
{
	//fast
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int f[51],sum[51];
		mem(sum,0);
		for(int i = 1;i<=n;i++)
			cin>>f[i];
		for(int i = 1;i<=n;i++)
		{
			int p;
			cin>>p;
			sum[f[i]] += p;
		}
		int mn = INT_MAX;
		for(int i = 1;i<=n;i++)
			mn = MIN(sum[f[i]], mn);
		cout<<mn<<nl;
	}

    return 0;
}

