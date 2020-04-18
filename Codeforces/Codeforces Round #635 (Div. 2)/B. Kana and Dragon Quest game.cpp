#include<bits/stdc++.h>
#define		fast			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define		rep(i,n)			for(int i = 1; i<=n; i++)
#define		all(p)			p.begin(),p.end()
#define		mem(ar,val)			memset(ar, val, sizeof(ar))
#define		sz(c)			(int)c.size()
#define		pb(x)			push_back(x)
#define		mkp(x,y)			make_pair(x,y)
#define		ff			first
#define		ss			second
#define		gap			" "
#define		ll			long long
#define		nl			"\n"
#define		FI			freopen("input.txt", "r", stdin);
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 1e6+7;
void solve(int x, int n, int m)
{
		int tm = x;
		tm -= (m*10);
		if(tm<1)
		{
			cout<<"YES\n";
			return;
		}
		tm = x;
		for(int i = 0; i<n; i++)
		{
			int h = (tm/2);
			tm = h + 10;
			if(tm - (m*10) < 1)
			{
				cout<<"YES\n";
				return;
			}
		}
		cout<<"NO\n";
}
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		int x,n,m;
		cin>>x>>n>>m;
		solve(x,n,m);
	}
    return 0;
}

