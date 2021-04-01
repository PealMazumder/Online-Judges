//Problem Link: https://cses.fi/problemset/task/2216/
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	int n, m, x, y;
	cin>>n>>m;
	int ar[n];
	vector<pair<int, int> > v;
	for(int i = 0; i<n; i++)
		cin>>ar[i], v.pb({ar[i], i});
	sort(v.begin(), v.end());
	int cnt = 1;
	for(int i = 1; i<sz(v); i++)
		if(v[i-1].second > v[i].second)cnt++;
	cout<<cnt<<nl;
	
	while(m--)
	{
		int a, b;
		cin>>a>>b;
		x = ar[a-1], y = ar[b-1];
		
		
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


