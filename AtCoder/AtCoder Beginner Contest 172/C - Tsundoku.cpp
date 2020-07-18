#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void solve()
{
	ll n, m, k,x;
	cin>>n>>m>>k;
	vector<ll> a(n+1),b(m+1);
	a[0] = 0, b[0] = 0;
	for(ll i = 1; i<=n; i++)
	{
		cin>>x;
		a[i] = a[i-1] + x;
	}
	for(ll i = 1; i<=m; i++)
	{
		cin>>x;
		b[i] = b[i-1] + x;
	}
	ll ans = 0;
	for(ll i = 0; i<=n && a[i] <= k; i++)
	{
		ll tm = k - a[i];
		auto low = lower_bound(b.begin(), b.end(), tm);
		ll idx = low - b.begin();
//		cout<<tm<<" "<< idx<<nl;
		if(idx<= m&&b[idx] <= tm) 
			ans = max(ans, i+idx);
		else
			ans = max(ans, i+idx-1);
	}
	cout<<ans<<nl;
}
int main()
{
	solve();
	return 0;
}
