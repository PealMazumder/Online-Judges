//Problem Link:https://toph.co/p/code-at-the-time-of-pandemic
#include<bits/stdc++.h>
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define ff						first
#define ss						second
#define ll						long long
#define nl						"\n"
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 1e6+7;
int main()
{
	int t,casino = 0;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		ll nw = 0,t = 1; 
		printf("Case %d:\n",++casino);
		printf("Day = 1, New = 0, Total = 1\n");
		for(int i = 2; i<=n; i++)
		{
			nw = t*2;
			t += nw;
			printf("Day = %d, New = %lld, Total = %lld\n",i,nw,t);
		}
		
	}
    return 0;
}