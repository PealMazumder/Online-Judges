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
const int modu = 998244353;
const int N = 1e5+1;
int main()
{
//	fast
	ll n, k;
	SS(n,k);
	ll ar[n+1],idx[n+1];
	ar[0] = 0;
	rep(i,n)
	{
		S(ar[i]);
		idx[ar[i]] = i;
	}
	sort(ar, ar+n+1);
	ll tp = 0;
	ll tm = k, tmn = n;
	vector<int> idxm;
	while(tm--)
	{
		tp += tmn;
		int s = 1, e = n;
		while(true)
		{
			int mid = (s+e)/2;
			if(ar[mid] == tmn)
			{
				idxm.pb(idx[ar[mid]]);
				break;
			}
			else if(ar[mid]>tmn)
				e = mid - 1;
			else
				s = mid + 1;
			///cout<<"cont\n";
		}
	//	cout<<"cont\n";
		tmn--;
	}
	sort(all(idxm));
	ll ans = 1;
	for(int i = 0; i<k-1; i++)
	{
		ll dif = idxm[i+1] - idxm[i];
		ans = (ans*dif)%modu; 
	}
	cout<<tp<<" "<<ans<<nl;
    return 0;
}