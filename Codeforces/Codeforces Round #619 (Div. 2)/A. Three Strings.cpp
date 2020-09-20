#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	string a, b, c;
	cin>>a>>b>>c;
	for(int i = 0; i<sz(a); i++)
	{
		if(a[i] == b[i] && a[i]!=c[i] ||a[i] != b[i] && a[i] != c[i] && b[i] != c[i])
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	    solve();

	return 0;
}