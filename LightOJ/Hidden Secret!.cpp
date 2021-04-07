//Problem Link: https://lightoj.com/problem/hidden-secret
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(x) (int)x.size()
#define	all(p) p.begin(),p.end()

using namespace std;
int casino = 0;
void solve()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	string x = "", y = "";
	
	for(int i = 0; i<sz(a); i++)
	{
		if(a[i] == ' ') continue;
		if(a[i] >=97 && a[i] <= 122)
			x += a[i];
		else x += (a[i] + 32); 
	}
	for(int i = 0; i<sz(b); i++)
	{
		if(b[i] == ' ') continue;
		if(b[i] >=97 && b[i] <= 122)
			y += b[i];
		else y += (b[i] + 32); 
	}
	sort(all(x));
	sort(all(y));
//	cout<<x<<" "<<y<<nl;
	cout<<"Case "<<++casino<<": ";
	if(x == y)
		cout<<"Yes\n";
	else cout<<"No\n";
}
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
	ll t;
	cin>>t;
	cin.ignore();
	while(t--)
		solve();
	return 0;
}

