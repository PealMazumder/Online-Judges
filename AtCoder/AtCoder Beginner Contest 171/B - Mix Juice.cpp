#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
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
#define		pnl			printf("\n");
#define		S(a)			scanf("%lld",&a)
#define		SS(a,b)			scanf("%lld %lld",&a,&b)
#define		SSS(a,b,c)			scanf("%lld %lld %lld",&a,&b,&c)
#define		P(a)			printf("%lld\n",a)
#define		PP(a,b)			printf("%lld %lld\n",a,b)
#define 	total_bit(a)		__builtin_popcount(a)
#define 	UNIQUE(a)		sort(all(a)); a.erase(unique(all(a)), a.end())
#define		FI			freopen("input.txt", "r", stdin);
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
const double pi = acos(-1.0);
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 1e6+7;
void solve()
{
	int n,k;
	cin>>n>>k;
	vi ar(n);
	for(int i = 0; i<n; i++)
		cin>>ar[i];
	sort(all(ar));
	ll ans = 0;
	for(int i = 0; i<k; i++) ans+= ar[i];
	cout<<ans<<nl;
}
int main()
{
 	solve();
	return 0;
}
