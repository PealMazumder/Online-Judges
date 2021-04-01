//Problem Link: https://lightoj.com/problem/discovering-permutations
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(x) (int)x.size()
#define	all(p) p.begin(),p.end()
using namespace std;
string capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int casino = 0;
void solve()
{
	int n, k;
	cin>>n>>k;
	string s = capital.substr(0, n);
	cout<<"Case "<<++casino<<":\n";
	while(k)
	{
		cout<<s<<nl;
		if(!next_permutation(s.begin(), s.end()) || n == 1)
			return;
		k--;
	}	
}
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}

