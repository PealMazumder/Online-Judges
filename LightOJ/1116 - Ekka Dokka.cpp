//Problem Link: http://lightoj.com/volume_showproblem.php?problem=1116
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
int casino = 0;
void solve()
{
	ll w;
	scanf("%lld", &w);
	ll m = 1;
	printf("Case %d: ", ++casino);
	if(w&1) // odd * even = even number
	{
		printf("Impossible\n");
		return;
	}
	while(w%2 == 0)
	{
		m*=2;
		w /= 2;
	}
	printf("%lld %lld\n",w, m);
		
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	    solve();

	return 0;
}


