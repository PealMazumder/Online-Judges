#include<iostream>
#include<cstdio>
#include<vector>
#define ll						long long
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
		vector<ll>ar(n+1);
		ll cnt = 0;
		for(int i = 1; i<=n; i++)
			scanf("%lld",&ar[i]);
			
		ll fidx = 0,odd = 0,even = 0,eidx = 0,pre = 0;
		
		for(int i = 1; i<=n; i++)
		{
			if(ar[i]%4==0)
			{
				fidx = i;
				cnt += i;
				even=0;
			}
			if(ar[i]&1)
			{
				//cout<<"cholche\n";
				odd++;
				cnt+=fidx;
			}
			if(ar[i]%2==0 && odd!=0)
			{
				ll tm = (odd*(odd+1))/2;
				cnt += tm;
				odd = 0;
			}
			if(ar[i]%2==0 && ar[i]%4!=0 && ar[i]!=0)
			{
				even++;
				if(even>1)
					fidx = eidx;
				cnt += fidx;
				pre = eidx;
				eidx = i;
			}
			//cout<<cnt<<"\n";
		}
		if(odd>1)
		{
			ll tm = (odd*(odd+1))/2;
			cnt += tm;
		}
		else
			cnt+=odd;
		printf("%lld\n",cnt);
	}
    return 0;
}


