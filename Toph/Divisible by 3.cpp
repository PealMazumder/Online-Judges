///Problem Link: https://toph.co/p/divisible-by-3
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int mod[10] = {0};
	long long ans = 0;
	ll sum = 0;
	for(int i = 0; i<(int)s.size(); i++)
	{
		sum += s[i] - '0';
		
		ll m = sum % 3;
		mod[m]++;
		if(m == 0)
			ans += mod[m];
		else
			ans += mod[m] - 1;		
	}
	cout<<ans<<"\n";
}
int main()
{
	solve();
	return 0;
}