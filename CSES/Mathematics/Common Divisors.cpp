//Problem Link: https://cses.fi/problemset/task/1081/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
const int mx = 1e6;
int cnt[mx + 1];
void solve()
{
    int n, x, i, j;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>x;
        for(j = 1; j*j <= x; j++)
        {
            if(x % j == 0)
            {
                cnt[j]++;
                if((x/j) != j) cnt[x/j]++;
            }
        }
    }
    for(i = mx; i > 0; i--)
        if(cnt[i] > 1)
        {
            cout<<i<<nl;
            break;
        }
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}


