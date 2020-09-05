//Problem Link: http://lightoj.com/volume_showproblem.php?problem=1387
#include<bits/stdc++.h>
using namespace std;
int casino = 0;
void solve()
{
	int n, CurrMny = 0, k;
	char s[10];
	scanf("%d",&n);
	printf("Case %d:\n",++casino);
	while(n--)
	{
		scanf("%s",s);
		if(s[0] == 'd')
		{
			scanf("%d",&k);
			CurrMny += k;
		}
		else printf("%d\n",CurrMny);	
	}
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	    solve();

	return 0;
}

