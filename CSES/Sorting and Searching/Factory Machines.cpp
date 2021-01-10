#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	ll ma, prd;
	cin>>ma>>prd;
	ll ar[ma];
	ll mn = INT_MAX;
	for(ll i = 0; i<ma; i++)
		cin>>ar[i], mn = min(mn, ar[i]);
	mn = mn*prd;
	
	ll left = 0, right = mn;
	while(left < right)
	{
		ll mid = left +(right - left)/2;
		ll sum = 0;
		for(ll i = 0; i<ma; i++)
		{
			sum += mid/ar[i];
		}	
		if(sum >= prd)
			right = mid;
		else
			left = mid+1;
	}
	cout<<left<<nl;
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


