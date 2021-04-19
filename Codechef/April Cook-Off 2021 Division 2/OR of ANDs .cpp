//Problem Link: https://www.codechef.com/COOK128B/problems/OROFAND/
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
ll Set(ll N,ll pos){return N |= (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}
//bool isPowerOfTwo (ll x) {return x && (!(x&(x-1)));}
//int Toggle(int N, int pos){return N ^= 1 << pos;}

void solve()
{
    ll n, q;
    cin>>n>>q;
    int ar[n];
    map<ll, ll> mp;
    for(ll i = 0; i<n; i++)
    {
        cin>>ar[i];
        for(ll j = 0; j < 64; j++)
        {
            if(check(ar[i], j) == 1)
                mp[j]++;
        }
    }
    ll ans = 0;
    for(ll j = 0; j < 64; j++)
    {
        if(mp[j] >= 1)
            ans = Set(ans, j);
    }
    cout<<ans<<nl;
    ll x, v;
    while(q--)
    {
        ans = 0;
        cin>>x>>v;
        x -= 1;
        for(ll i = 0; i < 64; i++)
        {
            if(check(ar[x], i) == 1)
                mp[i]--;
            if(check(v, i) == 1)
                mp[i]++;
        }
        for(ll j = 0; j < 64; j++)
        {
            if(mp[j] >= 1)
                ans = Set(ans, j);
        }

        ar[x] = v;
        cout<<ans<<nl;
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


