#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin>>n>>k;
	int ar[n];
	for(int i = 0; i<n; i++)
		cin>>ar[i];
	sort(ar, ar+n);
	if(k == 0 && ar[0]>1)
		cout<<ar[0] - 1<<"\n";
	else if(k == n || k && ar[k-1] !=ar[k])
		cout<<ar[k-1]<<"\n";
	else cout<<"-1\n";	
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