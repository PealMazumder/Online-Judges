#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(x) (int)x.size()
#define	all(p) p.begin(),p.end()

using namespace std;
int casino = 0;
void solve()
{
	string a, b, c, d;
	cin>>a>>b>>c>>d;
	double e,f,g,h,i,j,k,l;
	e = (a[0]-'0')*10 + (a[1]-'0');
	f = (a[3]-'0')*10 + (a[4]-'0');
	g = (b[0]-'0')*10 + (b[1]-'0');
	h = (b[3]-'0')*10 + (b[4]-'0');
	i = (c[0]-'0')*10 + (c[1]-'0');
	j = (c[3]-'0')*10 + (c[4]-'0');
	k = (d[0]-'0')*10 + (d[1]-'0');
	l = (d[3]-'0')*10 + (d[4]-'0');

	e = e+(f/60.0);
	g += (h/60.0);
	i += (j/60.0);
	k += (l/60.0);

	if(i>=e && i<=g || k >= e && k<=g|| e >= i && e <=k || g >= i && g<=k)
	{
		cout<<"Case "<<++casino<<": "<<"Mrs Meeting\n";
	}
	else cout<<"Case "<<++casino<<": "<<"Hits Meeting\n";

}
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
