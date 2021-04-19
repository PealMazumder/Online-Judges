//Problem Link: https://www.codechef.com/problems/TDISTS
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
int casino = 0;
void solve()
{
    int x, y;
    cin>>x>>y;

    int n = sqrt(x+y);
    if(n * n != x + y || n == 1 && y == 1)
    {
        cout<<"NO\n";
        return;
    }
    else if(n == 1)
    {
        cout<<"YES\n"<<1<<nl<<1<<nl;
        return;
    }

    int even = 1, odd = n - 1;

    while((2 * even * odd != y) && odd)
        even++, odd--;
    if(!odd || (2 * even * odd != y))
        cout<<"NO\n";
    else
    {
        cout<<"YES\n"<<n<<nl;
        for(int i = 1; i <= odd; i++)
            cout<<"1 "<<i+1<<nl;
        for(int i = 1; i < even; i++)
            cout<<"2 "<<odd + i + 1<<nl;
    }

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


