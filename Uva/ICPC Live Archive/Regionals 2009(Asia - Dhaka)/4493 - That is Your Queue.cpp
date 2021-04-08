#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(x) (int)x.size()
#define	all(p) p.begin(),p.end()
using namespace std;
const int N = 1e6+7;
int casino = 0;
void solve()
{
	ll p, c;
	while(cin>>p>>c)
	{
		if(p == 0 && c == 0) break;
		cout<<"Case "<<++casino<<":\n";
		list<ll> ar;
		ll mn = min(1001LL, p);
		
		for(ll i = 1; i<=mn; i++)
		ar.push_back(i);
		char ch; int val;
		while(c--)
		{
			cin>>ch;
			if(ch == 'E')
			{
				cin>>val;
				ar.remove(val);
				ar.push_front(val);
			}
			else
			{
				ll xx = ar.front();
				cout<<xx<<nl;
				ar.pop_front();
				ar.push_back(xx);
			}
		}
		
	}
	
}
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
//	int t;
//	cin>>t;
//	while(t--)
		solve();
	return 0;
}