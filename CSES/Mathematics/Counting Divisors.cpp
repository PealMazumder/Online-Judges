//Problem Link: https://cses.fi/problemset/task/1713/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
int NOD(int n)
{
	int ret = 1;
	for(int i = 2; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			int cnt = 1;
			while(n%i == 0)
			{
				cnt++;
				n/=i;
			}
			ret *= cnt;
		}
	}
	if(n>1)
		ret *= 2;
	return ret;
}
void solve()
{
    int x;
    cin>>x;
    cout<<NOD(x)<<nl;
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}


