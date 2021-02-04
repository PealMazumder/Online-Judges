#include<bits/stdc++.h>
//#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
using ll = long long;
ll ar[100005];
ll Lower_Bound(ll l, ll r, ll x)
{
    while(l < r)
	{
        ll mid = (l + r)/2;
        if(ar[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return l;
}


ll Upper_Bound(ll l, ll r, ll x)
{
    while(l < r)
	{
        ll mid = (l + r)/2;
        if(ar[mid] <= x) l = mid + 1;
        else r = mid;
    }
    return l;
}
void solve()
{
	ll n;
	cin>>n;
	for(ll i = 1; i<=n; i++)
		cin>>ar[i];
	ar[0]= 10000000000;
	sort(ar, ar + n+1);
	ll q, l, r;
	cin>>q;
	vector<ll> ans;
	while(q--)
	{
		cin>>l>>r;
		ll low = Lower_Bound(0, n, l);
		ll uppr = Upper_Bound(0, n, r);
		ans.push_back(uppr - low);
	}
	for(auto xx : ans)
		cout<<xx<<" ";
	cout<<nl;
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

