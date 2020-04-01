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
const int MX = 1e5 + 1;
int main()
{
	//fast
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,q ,e = 0, od = 0, ae = 0, aod = 0;
		scanf("%lld %lld",&n,&q);
		bool ck[MX];
		mem(ck,false);
		for(int i =0;i<n;i++)
		{
			ll a;
			scanf("%lld",&a);
			if(a<MX)
				ck[a] = true;
			ll tem = __builtin_popcountll(a);
			if(tem%2==0)
				ae++;
			else
				aod++;
		}
		while(q--)
		{
			ll p;
			scanf("%lld",&p);
			ll tm = __builtin_popcountll(p);
			if(tm%2==0)
			{
				e = ae;
				od = aod;
			}
			else
			{
				e = aod;
				od = ae;
			}
		//	if(ck[p]) e -= 1LL;
			printf("%lld %lld\n",e,od);
			e = 0, od = 0;
		}
	}

    return 0;
}