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
    ll n, a, k;
    cin>>n>>k;
    vll ar;
    for(int i = 0; i<n; i++)
    {
        cin>>a;
        if(ar.empty()) ar.push_back(a);
        else if(ar.back() != a) ar.push_back(a);
    }
    unordered_map<ll, int> mp, newbond;
    for(int i = 0; i<sz(ar); i++)
        mp[ar[i]]++;
    for(int i = 1; i<sz(ar)-1; i++)
    {
        if(ar[i-1] != ar[i+1])
            newbond[ar[i]]++;
    }
    ll tot = sz(ar) -  1;

    for(int i = 1; i<=k; i++)
    {
        ll tm = 0;
        if(ar[0] == i) tm++;
        if(ar[sz(ar)-1] == i) tm++;

        ll cnt = (mp[i] - tm) * 2 + tm;
        cout<<tot - cnt + newbond[i]<<" ";
    }
    cout<<nl;
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
