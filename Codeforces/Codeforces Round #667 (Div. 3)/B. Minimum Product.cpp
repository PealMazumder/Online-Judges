#include<bits/stdc++.h>
#define		nl			"\n"
#define		mod			1000000007
#define		sz(c)			(int)c.size()
#define		pb			push_back
#define		mkp			make_pair
#define 	deb			cout<<"ok\n"
#define		ll			long long
#define		pii			pair<int, int>
#define 	pll			pair<ll, ll>
#define 	vll			vector<ll>
#define 	vi			vector<int>
#define		no			printf("NO\n")
#define		yes			printf("YES\n")
#define		pnl			printf("\n");
#define		gcd(a, b)		__gcd(a, b)
#define		S(a)			scanf("%lld",&a)
#define		P(a)			printf("%lld\n",a)
#define		SS(a,b)			scanf("%lld %lld",&a,&b)
#define		PP(a,b)			printf("%lld %lld\n",a,b)
#define		total_bit(a)		__builtin_popcount(a)
#define		lcm(a, b)		((a)*((b)/gcd(a,b)))
#define		REP(i,n)		for(int i = 0; i<n; i++)
#define		all(p)			p.begin(),p.end()
#define		mem(ar,val)		memset(ar, val, sizeof(ar))
#define		SSS(a,b,c)			scanf("%lld %lld %lld",&a,&b,&c)
#define 	UNIQUE(a)		sort(all(a)); a.erase(unique(all(a)), a.end())
#define		fast			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define		FI			freopen("input.txt", "r", stdin);
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const double pi = acos(-1.0);
const int INF = 0x7f7f7f7f;
const int N = 1e6+7;

void solve()
{
	ll n, m, x, y, sum = 0, i, j, k, a, b, c, tm, val, cnt = 0, ans, res, mn = 0, mx = INT_MAX, l ,r;
	cin>>a>>b>>x>>y>>n;
	ll ca = a, cb = b, cn = n;
	if(a-x <= n)
		n-=(a-x),a = x;
	else
		a = a - n, n = 0;
	if(b-y<= n)
		b = y, n-=(b - y);
	else
		b = b - n, n = 0;
	
	val = a*b;
			
	a = ca, b = cb, n = cn;
	if(b-y <= n)
		n-=(b-y),b = y;
	else
		b = b - n, n = 0;
	if(a-x<= n)
		a = x, n-=(a - x);
	else
		a = a - n, n = 0;
	ans = a*b;
	cout<<min(val, ans)<<nl;
}
int main()
{
	ll t;
	S(t);
	while(t--)
		solve();
	return 0;
}
 