#include<bits/stdc++.h>
using namespace std;

int primeFact(int n)
{
	int total = 0;
	for(int i = 2; i*i<=n; i++)
	{
		if(!(n%i))
		{
			int cnt = 0;
			while(!(n%i))
			{
				cnt++;
				n /= i;
			}
			total += cnt;	
		}
	}
	if(n>1)
		total++;
	return total;	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,k;
		scanf("%d%d",&x,&k);
		int ans = primeFact(x);
		if(ans == 0 && k == 0||k<=ans && k>0)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
