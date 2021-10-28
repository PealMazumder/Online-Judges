#include<bits/stdc++.h>
#define         sz(c)               (int)c.size()
using namespace std;

vector<string>  keywords = { "auto", "break", "case", "char", "const"
    , "continue", "default", "do", "double", "else", "enum", "extern"
    , "float", "for", "goto", "if", "int", "long", "register", "return"
    , "short", "signed", "sizeof", "static", "struct", "switch", "typedef"
    , "union", "unsigned", "void", "volatile", "while"
};
void process(string& s)
{
    string curr;
    int i = 0;
    while(s[i] >='a' && s[i] <= 'z')
        curr+= s[i++];
    s = curr;
}
void solve()
{
    ifstream file;
    file.open("input.c");
    if(!file){
        cout<<"Unable to open file\n";
        exit(1);
    }
    string s;
    set<string> v;
    while(file >> s)
    {
        process(s);
        for(auto key : keywords)
        {
            bool flag = 0;
            if(sz(s) == sz(key))
            {
                for(int k = 0; k<sz(key); k++)
                {
                    if(key[k] != s[k])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            else flag = 1;
            if(!flag)
                v.insert(s);
        }
    }
    cout<<"Keywords: ";
    for(auto it : v)
        cout<<it<<" ";
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
