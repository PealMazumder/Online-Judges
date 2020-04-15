#include<bits/stdc++.h>
#define ll						long long
#define all(p)						p.begin(),p.end()
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
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
		scanf("%d",&n);
		vector<int>ar;
		for(int i=0; i<n; i++)
		{
			int x;
			scanf("%d",&x);
			ar.pb(x);
		}
		sort(all(ar),greater<int>());
		ll sum = 0;
		for(int i = 0; i<n; i++)
		{
			int tm;
			if(ar[i]-i<0)  tm = 0;
			else tm = ar[i] - i;
			sum = (sum+tm)%modu;
		}
		printf("%lld\n",sum);
		
	}
    return 0;
}


