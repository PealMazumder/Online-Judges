#include<bits/stdc++.h>
#define fast                        			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define all(p)						p.begin(),p.end()
#define mem(ar, val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI                      			freopen("input.txt", "r", stdin);
#define FO                      			freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;

int main()
{
	//fast
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n+2];
		for(int i =0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int l=0,r=n-1;
		ll out = 0, need = 0; 
		while(l<=r)
		{
		    if(a[r]%k!=0)
			{
				ll tem = a[r]/k + 1;
				need = tem*k - a[r];
//				cout<<"insideout "<<out<<"insideneed "<<need<<endl;
				if(out>=need)
				{
					out -= need;
					need = 0;
					r--;
				}
			}
			else if(a[r]%k==0)
				r--;
				
			if(a[l]%k!=0 && need>0)
			{
				ll tem = a[l]/k;
				out += a[l] - tem*k;
				l++;
//				if(out>=need)
//				{
//					out -= need;
//					need = 0;
//					r--;
//				}
			}
			else if(a[l]%k==0)
				l++;
//			cout<<"out "<<out<<"need "<<need<<endl;
//			cout<<"l "<<l<<" r "<<r<<endl;
		}
//		if(need!=0)
//		{
//			cout<<a[r]<<endl;
//				ll tem = a[r]/k;
//				out += (a[r] - tem*k);
//				need  = 0;
//		}
		out = out%k;
		printf("%lld\n",out);
	}

    return 0;
}
