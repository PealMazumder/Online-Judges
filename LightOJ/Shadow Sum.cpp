//Problem Link: https://lightoj.com/problem/shadow-sum
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(x) (int)x.size()
#define	all(p) p.begin(),p.end()

using namespace std;
int casino = 0;
void solve()
{
	int n, m, k, i, j;
	scanf("%d", &n);
	int ar[n];
	map<int, bool> flag;
	for(i = 0; i<n; i++)
		scanf("%d", &ar[i]);
	ll sum = 0;
	for(i = n-1; i>=0; i--)
	{
		if(flag[abs(ar[i])] == 0)
			sum += ar[i], flag[abs(ar[i])] = 1;
			
	}
	printf("Case %d: %lld\n", ++casino, sum);
}
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	ios::sync_with_stdio(false);
//	cin.tie(0);cout.tie(NULL);
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}

