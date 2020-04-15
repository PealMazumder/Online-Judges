#include<bits/stdc++.h>
using namespace std;
const int INF = 0x7f7f7f7f;
const int MX = 1e6 + 7;
int main()
{
//	fast
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n == 1) 
			printf("1\n1 1\n");
		else if(n==2)
			printf("1\n2 1 2\n");
		else
		{
			printf("%d\n",n/2);
			printf("3 1 2 3\n");
			for(int i = 4; i<n; i+=2)
			{
				printf("2 %d %d",i,i+1);
				printf("\n");
			}
			if(n%2==0)
				printf("1 %d\n",n);
		}
		
	}
	return 0;
}
