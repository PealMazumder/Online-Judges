#include<bits/stdc++.h>
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
bool comp(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second<b.second;
}

void solve(string s)
{
	unordered_map<char, int> mp;
	for(char x : s)
		mp[x]++;
	vector<pair<int, int> > ans;
	for(auto x : mp)
		ans.push_back(make_pair((int)x.first, x.second));
	sort(ans.begin(),ans.end(),comp);
	for(auto x : ans)
		cout<<x.first<<" "<<x.second<<"\n";
	
}
int main()
{
//	FO
	int ck = 0;
	string s;
	while(getline(cin,s))
	{
		if(ck>0) cout<<"\n";
		solve(s);
		ck++;
	}
	return 0;
}
