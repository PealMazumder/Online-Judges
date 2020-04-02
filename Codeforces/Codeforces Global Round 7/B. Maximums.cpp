#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define rep(i,n)						for(int i = 1; i<=n; i++)
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define mkp(x,y)					make_pair(x,y)
#define SS(a,b)						scanf("%lld%lld",&a,&b)
#define SSS(a,b,c)						scanf("%lld%lld%lld",&a,&b,&c)
#define S(a)						scanf("%lld",&a)
#define PP(a,b)						printf("%lld %lld\n",a,b)
#define PPP(a,b,c)						printf("%lld %lld %lld\n",a,b,c)
#define P(a)						printf("%lld\n",a)
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
const int N = 200000+1;
int main()
{
//	fast
	ll n;
	scanf("%lld",&n);
	ll ar[N];
	vector<ll> ans;
	for(int i = 0;i<n; i++)
	{
		scanf("%lld",&ar[i]);
		
	}
	ans.pb(ar[0]);
	ll mx = ar[0];
	for(int i = 1; i<n; i++)
	{
		ll a = ar[i] + mx;
		mx = max(mx,a);
		ans.pb(a);
	}
	for(int i = 0;i<n; i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
    return 0;
}