#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define rep(i,n)                    for(int i = 1; i<=n; i++)
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define mkp(x,y)					make_pair(x,y)
#define ff						first
#define ss						second
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
vector<pair<int, int> > v;
int a[39] = {0,1,2,3,4,5,6,7,8,7,8,7,8,7,8,7,6,5,6,5,6,5,4,3,2,1,2,1,2,1,2,3,4,5,4,3,4,3,2};
int b[39] = {0,1,2,1,2,1,2,1,2,3,4,5,6,7,8,7,8,7,6,5,4,3,4,3,2,3,4,5,6,7,8,7,8,7,6,5,4,3,2};
int ck[9][9]={0};
int main()
{
	//fast
	for(int i = 1; i<=38; i++)
	{
		v.pb(mkp(a[i],b[i]));
		if(ck[a[i]][b[i]] == 0)
			ck[a[i]][b[i]] = i-1;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int r,c;
		cin>>r>>c;
		int idx = ck[r][c];
		cout<<38<<nl;
		for(int i = idx;i>=0;i--)
			cout<<v[i].ff<<" "<<v[i].ss<<nl;
		
		for(int i = 37;i>idx;i--)
			cout<<v[i].ff<<" "<<v[i].ss<<nl;
	}
    return 0;
}

