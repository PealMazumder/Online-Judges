#include<bits/stdc++.h>
#define         nl                  "\n"
#define         mod                 1000000007
#define         sz(c)               (int)c.size()
#define         pb                  push_back
#define         ff                  first
#define         ss                  second
#define         ll                  long long
#define         all(p)              p.begin(),p.end()
using namespace std;
const ll INF = 1000000000000000000;
const int N = 1e6+7;

void solve()
{

    ifstream inFile;

    inFile.open("input.c");

    string s;

    stack<int>st;

    while(getline(inFile,s))
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(!st.empty())
            {
                cout<<s[i];
                if(s.size() > 1 and i > 0)
                {
                    if(st.top()==2 and s[i]=='/' and s[i-1]=='*')st.pop();
                }
            }
            else if(s.size()>1 and i>0)
            {
                if(s[i-1]=='/' and (s[i]=='*' or s[i]=='/'))
                {
                    if(s[i]=='/')st.push(1);
                    if(s[i]=='*')st.push(2);
                    cout<<s[i-1]<<s[i];
                }
            }
        }
        if(!st.empty())
        {
            if(st.top()==1)st.pop();
        }
        cout<<"\n";
    }
}
int main()
{
//    freopen("input.c", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    ios::sync_with_stdio(false);
//    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}
