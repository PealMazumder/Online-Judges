#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin>>n>>k;
	while(k-- && n)
	{
		if(n%10 == 0)
			n/=10;
		else
			n--;
	}
	cout<<n<<"\n";
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