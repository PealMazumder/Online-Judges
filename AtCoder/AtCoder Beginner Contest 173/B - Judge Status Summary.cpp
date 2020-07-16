#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	string s;
	map<string, int> mp;
	for(int i = 0; i<n; i++)
	{
		cin>>s;
		mp[s]++;
	}
	cout<<"AC x "<<mp["AC"]<<"\n";
	cout<<"WA x "<<mp["WA"]<<"\n";
	cout<<"TLE x "<<mp["TLE"]<<"\n";
	cout<<"RE x "<<mp["RE"]<<"\n";
}
int main()
{
	solve();
	return 0;
}
