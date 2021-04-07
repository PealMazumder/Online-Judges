// Problem Link: https://lightoj.com/problem/redirect-url
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(x) (int)x.size()
#define	all(p) p.begin(),p.end()

using namespace std;
int casino = 0;
void solve()
{
	string s;
	cin>>s;
	string a = s.substr(0, 4);
	cout<<"Case "<<++casino<<": ";
	cout<<a;
	for(int i = 4; i<sz(s); i++)
	{
		if(s[i] == 's' || i > 4)
			cout<<s[i];
		else
			cout<<"s"<<s[i];
	}
	cout<<nl;;
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

