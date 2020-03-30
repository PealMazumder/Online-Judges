#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=1; i<=t; i++)
	{
		int n, m, ans = 1;
		cin>>n>>m;
		long long mm = m%n;
		
		while(mm)
		{
			
			mm = (mm*10 + m)%n;
			
			ans++;
		}
		cout<<"Case "<<i<<": "<<ans<<endl;
	}
	return 0;
}
