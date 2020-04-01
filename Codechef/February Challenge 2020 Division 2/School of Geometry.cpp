#include<bits/stdc++.h>
#define fast                        			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define ll					    long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
using namespace std;
const int INF = 0x7f7f7f7f;

int main()
{
	//fast
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		unsigned long long sum=0;
    	scanf("%d",&n);
		ll a[n+1],b[n+1];
		for(int i = 0;i<n; i++)
			scanf("%lld",&a[i]);
		for(int i = 0;i<n; i++)
			scanf("%lld",&b[i]);
		sort(a,a+n);
		sort(b,b+n);
		for(int i = 0; i<n; i++)
		{
			sum += MIN(a[i],b[i]);
		}
		printf("%llu\n",sum);
	}
    return 0;
}
