#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;

void solve()
{
	int n, m;
	cin>>n>>m;
	int a;
	multiset<int> ar;
	for(int i = 0; i<n; i++)
	{
		cin>>a;
		ar.insert(a);
	}
	for(int i = 0; i<m; i++)
	{
		cin>>a;
		auto xx = ar.lower_bound(a);
		if(*xx == a)
		{
			ar.erase(xx);
			cout<<a<<" ";
		}
		else if(xx != ar.begin())
		{
			xx--;
			cout<<*xx<<" ";
			ar.erase(xx);	
		}

		else
			cout<<"-1 ";
	}
	cout<<nl;	
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


