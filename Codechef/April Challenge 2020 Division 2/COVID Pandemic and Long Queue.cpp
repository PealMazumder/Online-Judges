#include<bits/stdc++.h>
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
		int ar[n+1];
		int pre = 0;
		bool ck = true;
		for(int i = 1; i<=n; i++)
		{
			scanf("%d",&ar[i]);
			if(pre == 0 && ar[i]==1)
				pre = i;
			else if(ar[i]==1)
			{
				if(i-pre<6)
					ck = false;
				pre = i;
			}
		}
		if(ck)
			printf("YES\n");
		else
			printf("NO\n");
		
			
	}
    return 0;
}


