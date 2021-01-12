//Problem Link: https://cses.fi/problemset/task/1074
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	ll n;
	cin>>n;
	ll ar[n];
	for(ll i = 0; i<n; i++)
		cin>>ar[i];
	sort(ar, ar+n);
	ll mid = ar[n/2], ans = 0;
	for(ll i = 0; i<n; i++)
		ans += abs(ar[i] - mid);
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


