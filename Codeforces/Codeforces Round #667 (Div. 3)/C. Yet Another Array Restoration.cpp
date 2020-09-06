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
ll Div(ll n, ll need)
{
	vector<int> v; 
	for (int i=1; i<=sqrt(n); i++) 
	{ 
		if (n%i==0) 
		{ 
			if (n/i == i) // check if divisors are equal 
				v.push_back(i);
			else
			{ 
				v.push_back(i);

				// push the second divisor in the vector 
				v.push_back(n/i); 
			} 
		} 
	}
	sort(all(v));
	for(int i = 0; i<sz(v); i++)
	{
		if(n / v[i] <= need+1)
			return v[i];
	}
	return n;
}
void solve()
{
	ll n, m, x, y, sum = 0, i, j, k, a, b, c, tm, val, cnt = 0, ans, res, mn = 0, mx = INT_MAX, l ,r;
	cin>>n>>x>>y;
	ll dif = y-x;
	if(dif+1 == n)
	{
		for(i = x; i<=y; i++)
			cout<<i<<" ";
		pnl;
		return;
			
	}
	ll dv = Div(dif, n-2);
//	cout<<dv<<nl;
	for(i = y; i>=1 && n; i-= dv)
	{
		cout<<i<<" ";
		n--;
	}
	while(n--)
	{
		cout<<y+dv<<" ";
		y+= dv;
	}
	pnl;
}
int main()
{
	ll t;
	S(t);
	while(t--)
		solve();
	return 0;
}