//Problem Link: http://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
ll ar[100005];
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
	ll n, k, tr;
	cin>>n>>k;
	for(ll i = 0; i < n; i++)
	{
		cin>>ar[i];
	}	
	ar[n] = INT_MAX;
	while(k--)
	{
		cin>>tr;
		ll ans = Upper_Bound(0, n, tr);
		cout<<ans<<nl;	
	}
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
