//Problem Link: https://cses.fi/problemset/task/2183/
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i = 0; i<n; i++)
		cin>>ar[i];
	
	sort(ar, ar+n);
	ll ans = 1;
	for(int i = 0; i<n; i++)
	{
		if(ans < ar[i]) break;
		else ans += ar[i];
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


