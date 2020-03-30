#include<bits/stdc++.h>
#define all(p)                  p.begin(),p.end()
#define mem(p, v)               memset(p, v, sizeof(p))
#define sz(c)                   (int)c.size()
#define pb(x)                   push_back(x)
#define ll                      long long
#define nl                      "\n"
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
using namespace std;
int dp[101];
int main()
{
//  FI
//    FO
    int t,casino=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,cnt=0;
        scanf("%d",&n);
        int ar[n+1];
        for(int i = 1;i<=n;i++)
        {
            scanf("%d",&ar[i]);
            dp[ar[i]] = i;
        }
        for(int i = 1;i<=n;i++)
        {

            if(ar[i]!=i)
            {
                int idx= dp[i];
                int tem = ar[i];
                swap(ar[idx],ar[i]);
                dp[i] = i;
                dp[tem] = idx;
                cnt++;
            }

        }

        printf("Case %d: %d\n",++casino,cnt);
    }
    return 0;
}
