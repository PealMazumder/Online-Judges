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
#define gap                     <<" "<<
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int modu = 1e9 + 7;
const int N = 1e6+7;
int main()
{
//	fast
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		cin>>n;
	
		string s;
		cin>>s;
		int boro = 0;
		string a= "", b = "";
		for(int i = 0; i<n; i++)
		{
			int tm = s[i] - '0';
			if(tm == 0)
				a+='0', b+='0';
			else if(tm == 1)
			{
				if(boro == 0)
				{
					a+='1';
					boro = 1;
					b+='0';
				}
				else if(boro == 1)
				{
					a+='0';
					b+='1';
				}
				
			}
			else if(tm == 2)
			{
				if(boro == 1)
				{
					a+='0';
					b+='2';
				}
				else
				{
					a+='1';
					b+='1';
				}
			}
		}		
		cout<<a<<nl;
		cout<<b<<nl;
	}
    return 0;
}


