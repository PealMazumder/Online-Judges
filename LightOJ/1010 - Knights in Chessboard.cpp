#include<bits/stdc++.h>
#define		fast			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define		rep(i,n)		for(int i = 1; i<=n; i++)
#define		all(p)			p.begin(),p.end()
#define		mem(ar,val)		memset(ar, val, sizeof(ar))
#define		sz(c)			(int)c.size()
#define		pb(x)			push_back(x)
#define		mkp(x,y)		make_pair(x,y)
#define 	deb			cout<<"hehehe\n"
#define		ff			first
#define		ss			second
#define 	pf 			printf
#define 	sf 			scanf
#define		ll			long long
#define		pii			pair<int, int>
#define 	pll			pair<ll, ll>
#define 	vll			vector<long long>
#define 	vi			vector<int>
#define		nl			"\n"
#define		pnl			cout<<"\n"
#define 	total_bit(a)		__builtin_popcount(a)
#define 	UNIQUE(a)		sort(all(a)); a.erase(unique(all(a)), a.end())
#define		FI			freopen("input.txt", "r", stdin);
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 1e6+7;
int main()
{
	int t,casino = 0;
	scanf("%d",&t);
	while(t--)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		printf("Case %d: ",++casino);
		if(m == 1 || n == 1)
			printf("%d\n",max(n,m));
		else if(m == 2 || n == 2)
		{
			int ans = max(m,n);
			if(ans % 4 == 1 || ans % 4 == 3) ans++;
			else if(ans % 4 == 2) ans+= 2;
			printf("%d\n",ans);
		}
		else if((m*n) & 1) 
			printf("%d\n",((m*n)/2) + 1);
		else
			printf("%d\n",((m*n)/2));	
	}
    return 0;
}

