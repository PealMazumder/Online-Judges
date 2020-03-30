#include<bits/stdc++.h>
#define ll 						long long
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
using namespace std;

int main()
{
	int t, casino = 0;
	scanf("%d",&t);
	while(t--)
	{
		ll s; 
		int x, y;
		scanf("%lld",&s);
		ll Sqrt = ceil(sqrt(s));
		ll sqVal = Sqrt * Sqrt;
		ll midVal = sqVal - Sqrt + 1;
		if(sqVal % 2 == 0)
		{
			
			if(s > midVal)
			{
				x = Sqrt;
				y = sqVal - s + 1;
			}
			else
			{
				y  = Sqrt;
				ll preSqrVal = (Sqrt-1)*(Sqrt-1);
				x = s - preSqrVal;
			}
		}
		else 
		{
			if(s > midVal)
			{
				y  = Sqrt;
				x = sqVal - s + 1;
			}
			else
			{
				x  = Sqrt;
				ll preSqrVal = (Sqrt-1)*(Sqrt-1);
				y = s - preSqrVal;
			}
		}
		printf("Case %d: %d %d\n",++casino,x,y);
	}
	return 0;
}

