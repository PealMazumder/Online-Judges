//Problem Link: https://cses.fi/problemset/task/1643
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	ll n, mn = 0, ans = INT_MIN;
	cin>>n;
	ll val, csum[n+1] = {0};
	
	for(ll i = 0; i<n; i++)
	{
		cin>>val;
		csum[i+1] = val + csum[i];
	}
	for(ll i = 1; i<=n; i++)
	{
		ans = max(ans, csum[i] - mn);
		mn = min(mn, csum[i]);	
	}	
	cout<<ans<<nl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);

//	int t;
//	cin>>t;
//	while(t--)
	    solve();

	return 0;
}


