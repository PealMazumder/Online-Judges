//Problem Link: https://www.codechef.com/problems/NANDXOR
#include<bits/stdc++.h>
#define         nl                  "\n"
#define         mod                 1000000007
#define         sz(c)               (int)c.size()
#define         pb                  push_back
#define         ff                  first
#define         ss                  second
#define         mkp                 make_pair
#define         ll                  long long
#define         pii                 pair<int, int>
#define         pll                 pair<ll, ll>
#define         vll                 vector<ll>
#define         vi                  vector<int>
#define         no                  cout<<"NO\n"
#define         yes                 cout<<"YES\n"
#define         one                 cout<<"1\n"
#define         mone                cout<<"-1\n"
#define         gcd(a, b)           __gcd(a, b)
#define         total_bit(a)        __builtin_popcount(a)
#define         lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define         all(p)              p.begin(),p.end()
#define         mem(ar,val)         memset(ar, val, sizeof(ar))
#define         UNIQUE(a)           sort(all(a)); a.erase(unique(all(a)), a.end())
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const double pi = acos(-1.0);
const ll INF = 1000000000000000000;
const int N = 1e6+7;
void bruteforce(vector<int> &ar, int n)
{
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = i+1; k < n; k++) {
                if(k == j) continue;
                for(int l = k+1; l < n; l++) {
                    if(l == j) continue;
                    if(total_bit(ar[i] ^ ar[j]) == total_bit(ar[k] ^ ar[l])) {
                        cout<<i+1<<" "<<j+1<<" "<<k+1<<" "<<l+1<<nl;
                        return;
                    }
                }
            }
        }
    }
    mone;
}
void solve()
{
    int n, m, i, j, k, cnt = 0, sm = 0, sm1 = 0, sm2 = 0;
    cin>>n;
    vector<int> ar(n);
    for(i = 0; i<n; i++) {
        cin>>ar[i];
    }
    if(n < 64) {
        bruteforce(ar, n);
        return;
    }
    vector<int> ans[31];
    for(i = 0; i < 64; i += 2)
    {
        int totSet = total_bit(ar[i] ^ ar[i+1]);
        ans[totSet].pb(i);
        ans[totSet].pb(i+1);
    }
    for(i = 0; i < 31; i++) {
        if(sz(ans[i]) >= 4) {
            for(j = 0; j < 4; j++) {
                cout<<ans[i][j] + 1<<" ";
            }
            cout<<nl;
            return;
        }
    }
    mone;

}
int main() {
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
