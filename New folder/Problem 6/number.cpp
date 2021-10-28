#include<bits/stdc++.h>
#define         sz(c)               (int)c.size()
using namespace std;
bool check(char ch)
{
    if (ch==' ' || ch=='\n' || ch=='\0' || ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=') return 1;
    if (ch=='>' || ch=='<' || ch==',' || ch==';' || ch=='|' || ch=='&' || ch=='!' || ch=='^' || ch==')') return 1;
    return 0;
}
void solve()
{
    string line;
    while(getline(cin, line))
    {
        line = ' ' + line + ' ';
        for(int i = 1; i < sz(line)-1; i++)
        {
            if(line[i] >= '0' and line[i] <= '9')
            {
                if(i > 0 and check(line[i-1]))
                {
                    string num = "";
                    while(line[i] >= '0' and line[i] <= '9')
                    {
                        num += line[i++];
                    }
                    if(check(line[i]))
                    {
                        cout<<num<<endl;
                        i++;
                    }
                }
            }
        }
    }

}
int main()
{
    freopen("input.c", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    ios::sync_with_stdio(false);
//    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}
