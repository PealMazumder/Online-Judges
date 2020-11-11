//Problem Link: https://www.spoj.com/problems/LKS/
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
 
void solve()
{
	int n, w, weight, value;
	cin>>w>>n;
	vector<ll> dp(w+1);
	for(int i = 0; i<n; i++)
	{
		cin>>value>>weight;
		for(int j = w - weight; j >= 0; j--)
		{
			dp[weight+j] = max(dp[weight+j], dp[j] + value);
		}
	}
	ll ans = 0;
	for(int i = 0; i<=w; i++)
		ans = max(ans, dp[i]);
	cout<<ans<<nl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
 
	solve();
 
	return 0;
} 
