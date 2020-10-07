///Problem Link:https://toph.co/p/hablu-is-in-quarantine
#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define rep(i,n)					for(int i = 1; i<=n; i++)
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define mkp(x,y)					make_pair(x,y)
#define SS(a,b)						scanf("%lld%lld",&a,&b)
#define SSS(a,b,c)					scanf("%lld%lld%lld",&a,&b,&c)
#define S(a)						scanf("%lld",&a)
#define PP(a,b)						printf("%lld %lld\n",a,b)
#define PPP(a,b,c)					printf("%lld %lld %lld\n",a,b,c)
#define P(a)						printf("%lld\n",a)
#define ff						first
#define ss						second
#define gap						<<" "<<
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 250007;
int ar[N] = {0};
int main()
{
	fast
	int n;
	cin>>n;
	for(int i = 1; i<=n*n; i++)
	{
		char c;
		cin>>c;
		if(c=='a') ar[i] = 1;
	}
	int x;
	cin>>x;
	vector<int> v;
	bool ck = false;
	for(int i = 0; i<x; i++)
	{
		int xx;
		cin>>xx;
	//	cout<<xx<<" "<<ar[xx]<<nl;
		if(ck == true && ar[xx]!=0) v.pb(xx);
		if(ar[xx] == 0)
			ck = true;
	//	cout<<ck<<nl;
	}
	if(!ck) cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		for(int i = 0; i<sz(v); i++)
			cout<<v[i]<<" ";
		cout<<nl;
	}
    return 0;
}