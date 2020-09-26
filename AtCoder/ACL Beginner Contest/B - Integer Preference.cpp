#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	ll a, b, c, d;
	cin>>a>>b>>c>>d;
	if((a <= c && c<=b)|| (a <= d && d<=b) || (a>=c && a<=d) || (b>=c && b<=d))
		cout<<"Yes\n";
	else cout<<"No\n";

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

