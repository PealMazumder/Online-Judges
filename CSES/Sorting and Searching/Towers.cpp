#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	int n, x;
	cin>>n;
	vector<pair<int, int> >v;
	for(int i = 0; i<n; i++)
	{
		cin>>x;
		v.pb({x, i});
	}
	sort(v.begin(), v.end());
	int ans = 1;
	for(int i = 1; i<n; i++)
	{
		if(v[i-1].second < v[i].second) ans++;
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


