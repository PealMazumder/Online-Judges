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
vector<string>  keywords = { "auto", "break", "case", "char", "const"
    , "continue", "default", "do", "double", "else", "enum", "extern"
    , "float", "for", "goto", "if", "int", "long", "register", "return"
    , "short", "signed", "sizeof", "static", "struct", "switch", "typedef"
    , "union", "unsigned", "void", "volatile", "while"
};
bool isValid(string& var)
{
    string s = "";

    int len = sz(var)-1;
    while(len > 0 and var[len] == ' ') len--;
    int i = 0;
    while(i < sz(var) and var[i] == ' ') i++;
    for(int j = i; j <= len; j++) s += var[j];
    var = s;

    for(i = 0; i < sz(keywords); i++)
        if(keywords[i] == s) return false;
    if(!(s[0] == '_' ||(s[0] >= 'a' and s[0] <= 'z') ||(s[0] >= 'A' and s[0] <= 'Z')))
        return false;
    for(i = 1; i < sz(s); i++) {
        if(!(s[i] == '_' or (s[i] >= '0' and s[i] <= '9') or (s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z')))
            return false;
    }
    return true;
}
map<string, bool> types = {{"string", 1}, {"int", 1},{"bool", 1},{"float", 1}, {"long", 1}, {"double", 1}, {"char", 1}};
bool isFunction(string line)
{
    for(int i = 0; i < sz(line); i++)
        if(line[i] == '(') return true;
    return false;
}
void solve()
{
    string line, s;
    vector<string> st, in, bo, ft, lng, db, chr;
    while(getline(cin, line))
    {
        if(isFunction(line))
            continue;
        string variableType = "";
        int i = 0;
        while(i < sz(line) and line[i] == ' ') i++;

        while(i < sz(line))
        {
            if(line[i] == ' ')
            {
                i++;
                break;
            }
            variableType += line[i];
            i++;
        }
        if(types[variableType] == 1)
        {

            while(i < sz(line) && line[i] != ';')
            {
                string var;
                while(i < sz(line))
                {
                    if(line[i] != ',' and line[i] != '=' and line[i] != ';')
                        var += line[i];
                    else
                    {
                        while(line[i] != ',' and line[i] != ';') i++;
                        break;
                    }
                    i++;
                }
                if(isValid(var))
                {
                    if(variableType == "string") st.push_back(var);
                    else if(variableType == "int") in.push_back(var);
                    else if(variableType == "bool") bo.push_back(var);
                    else if(variableType == "float") ft.push_back(var);
                    else if(variableType == "long") lng.push_back(var);
                    else if(variableType == "double") db.push_back(var);
                    else if(variableType == "char") chr.push_back(var);
                }
                i++;
            }
        }
    }

    if(sz(st) > 0)
    {
        cout<<"string variables: ";
        for(auto it : st)
            cout<<it<<",";
        cout<<endl;
    }
    if(sz(in) > 0)
    {
        cout<<"int variables: ";
        for(auto it : in)
            cout<<it<<",";
        cout<<endl;
    }
    if(sz(ft) > 0)
    {
        cout<<"float variables: ";
        for(auto it : ft)
            cout<<it<<",";
        cout<<endl;
    }
    if(sz(bo) > 0)
    {
        cout<<"bool variables: ";
        for(auto it : bo)
            cout<<it<<",";
        cout<<endl;
    }
    if(sz(chr) > 0)
    {
        cout<<"char variables: ";
        for(auto it : chr)
            cout<<it<<",";
        cout<<endl;
    }
    if(sz(db) > 0)
    {
        cout<<"int variables: ";
        for(auto it : db)
            cout<<it<<",";
        cout<<endl;
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    ios::sync_with_stdio(false);
//    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}
