#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	string s;
	cin>>n>>s;
	map<string, int> mp;
	for(int i = 0; i<(int)s.size(); i++)
	{
		string tm;
		tm.push_back(s[i]);
		if(i+1<(int)s.size())
			tm.push_back(s[i+1]);
		else continue;
		mp[tm]++;
//		cout<<tm<<"\n";
	}
	int mx = 0;
	string ans;
	for(auto x : mp)
		if(x.second > mx)
			ans = x.first, mx = x.second;
	cout<<ans<<"\n";
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