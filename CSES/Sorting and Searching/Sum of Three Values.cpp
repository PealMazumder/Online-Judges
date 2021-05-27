//Problem Link: https://cses.fi/problemset/task/1641/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define ss second
#define ff first
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
void solve()
{
    int n, x;
    cin>>n>>x;
    vector<pair<int, int> > ar(n);
    for(int i = 0; i<n; i++)
    {
        cin>>ar[i].ff;
        ar[i].ss = i+1;
    }
    sort(all(ar));
    for(int i = 0; i<n; i++)
    {
        int need = x - ar[i].ff;
        int l = 0, r = n-1;
        while(l < r)
        {
            int val = ar[l].ff + ar[r].ff;
            if(need == val && ar[l].ss != ar[i].ss && ar[r].ss != ar[i].ss)
            {
                cout<<ar[i].ss<<" "<<ar[l].ss<<" "<<ar[r].ss<<nl;
                return;
            }
            else if(val > need)
                r--;
            else l++;
        }
    }
    cout<<"IMPOSSIBLE\n";
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


