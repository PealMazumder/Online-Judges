#include<bits/stdc++.h>
#define		nl				"\n"
#define		mod				1000000007
#define		sz(c)			(int)c.size()
#define		pb				push_back
#define		ff				first
#define		ss				second
#define		mkp				make_pair
#define		ll				long long
#define		pii				pair<int, int>
#define 	pll				pair<ll, ll>
#define 	vll				vector<ll>
#define 	vi				vector<int>
#define		no				cout<<"NO\n"
#define		yes				cout<<"YES\n"
#define		one				cout<<"1\n"
#define		mone			cout<<"-1\n"
#define		gcd(a, b)		__gcd(a, b)
#define		total_bit(a)	__builtin_popcount(a)
#define		lcm(a, b)		((a)*((b)/gcd(a,b)))
#define		REP(i,n)		for(int i = 0; i<n; i++)
#define		all(p)			p.begin(),p.end()
#define		mem(ar,val)		memset(ar, val, sizeof(ar))
#define 	UNIQUE(a)		sort(all(a)); a.erase(unique(all(a)), a.end())
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const double pi = acos(-1.0);
const ll INF = 1000000000000000000;
const int N = 1e6+7;

void solve()
{
	ll total, ones;
	cin >> total >> ones;

	ll zeros = total - ones;
	if(zeros <= ones + 1)
	{
	    cout<<zeros<<nl;
	    return;
	}

	ll zero_in_each_seg = zeros / (ones + 1);
	
	ll extra_zeros = zeros % (ones + 1); //No of segments going to have extra zeros

	ll seg = ones + 1 - extra_zeros;//No of segments doesn't have extra zeros..... total_seg = ones + 1

	ll ans = (zero_in_each_seg * (zero_in_each_seg + 1))/2;
	ans *= seg;

	zero_in_each_seg++;// extra zeros are distributed in segments equally

	ll ans2 = (zero_in_each_seg * (zero_in_each_seg + 1))/2;
	
	ans2 *= extra_zeros;
	
    cout<<ans + ans2<<nl;



}
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
