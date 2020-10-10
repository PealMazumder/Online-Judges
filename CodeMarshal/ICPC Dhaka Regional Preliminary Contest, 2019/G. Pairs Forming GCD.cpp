///Problem Link: https://algo.codemarshal.org/contests/icpc-dhaka-19-preli/problems/G
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
const int mx = 10000002;
int phi[mx];
ll phiSum[mx];
int casino = 0;
void phiPrecal()
{
	for(int i = 0; i<mx; i++)
		phi[i] = i;
	for(int i = 2; i<mx; i++)
	{
		if(phi[i] == i)
		{
			for(int j = i; j<mx; j += i)
				phi[j] -= (phi[j]/i);
		}
	}
	for(int i = 1; i<mx; i++)//cumulative sum
		phiSum[i] = phi[i] + phiSum[i-1];
}
void solve()
{
	int n;
	ll p;
	scanf("%d %lld",&n, &p);
	
	int lo = 0, hi = n, mid;
	int ans = -1;
	while(lo <= hi)
	{
		mid = lo + (hi-lo)/2;
		if(phiSum[mid] >= p)
		{
			ans = mid;
			hi = mid-1;
		}
		else lo = mid+1;
	}
	printf("Case %d: ",++casino);
	if(ans == -1)
		cout<<ans<<nl;
	else cout<<n/ans<<nl;
}
int main()
{
	phiPrecal();
	int t;
	scanf("%d",&t);
	while(t--)
	    solve();

	return 0;
}
