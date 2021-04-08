//Tutorial: http://programmingforinsomniacs.blogspot.com/2018/03/gospers-hack-explained.html
//Problem Link: https://lightoj.com/problem/secret-origins
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
int casino = 0;
void solve()
{
    int n;
    cin>>n;
    int c = n & - n;
    int r = n + c;
    n = (((r ^ n) >> 2) / c) | r;
    cout<<"Case "<<++casino<<": "<<n<<nl;
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


