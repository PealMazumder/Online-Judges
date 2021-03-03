#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
ll Binary_Search(ll w, ll h, ll n)
{
	ll l = 0, r = 1;
	while((r/w) * (r/h) < n) r *= 2;
	while(l+1 < r)
	{
		ll m =  l + (r-l)/2;
		ll tm = (m/w) * (m/h); 
		if(tm >= n)
			r = m;
		else l = m;
	}
	return r;
}
void solve()
{
	ll w, h, n;
	cin>>w>>h>>n;
	ll ans = Binary_Search(w, h, n);
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


