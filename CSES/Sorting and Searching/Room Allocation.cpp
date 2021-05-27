//Problem Link: https://cses.fi/problemset/task/1164/
#include<bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pb push_back
#define sz(x) (int)x.size()
#define    all(p) p.begin(),p.end()
using namespace std;
void solve()
{
    int n, a, b;
    cin>>n;
    vector<pair<pair<int, int>, int> > ar(n);
    for(int i = 0; i<n; i++)
    {
        cin>>ar[i].first.first>>ar[i].first.second;
        ar[i].second = i;
    }
    sort(all(ar));
    set<pair<int, int> > st;
    int k = 0;
    vector<int> ans(n);
    for(int i = 0; i<n; i++)
    {
        if(st.empty())
        {
            k++;
            ans[ar[i].second] = k;
            st.insert({ar[i].first.second, k});
        }
        else
        {
            auto it = *st.begin();
            if(it.first < ar[i].first.first)
            {
                st.erase(it);
                ans[ar[i].second] = it.second;
                st.insert({ar[i].first.second, it.second});
            }
            else
            {
                k++;
                ans[ar[i].second] = k;
                st.insert({ar[i].first.second, k});
            }

        }
    }
    cout<<k<<nl;
    for(int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<nl;
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
