#include<bits/stdc++.h>
#define         sz(c)               (int)c.size()
using namespace std;
vector<string>  keywords = { "auto", "break", "case", "char", "const"
    , "continue", "default", "do", "double", "else", "enum", "extern"
    , "float", "for", "goto", "if", "int", "long", "register", "return"
    , "short", "signed", "sizeof", "static", "struct", "switch", "typedef"
    , "union", "unsigned", "void", "volatile", "while"
};
vector<string> types = {"string", "int","bool","float", "long", "double", "char"};
bool isFunction(string line)
{
    for(int i = 0; i < sz(line); i++)
        if(line[i] == '(') return true;
    return false;
}
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
void solve()
{
    string line, s;
    vector<string> validVariables, invalidVariables;
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
        if(find(types.begin(), types.end(), variableType) != types.end())
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
                    validVariables.push_back(var);
                }
                else
                {
                    invalidVariables.push_back(var);
                }
                i++;
            }
        }
    }
    if(sz(validVariables) > 0) {
        printf("Valid Variables are:");
        for(int i = 0; i < sz(validVariables); i++)
            cout<<" "<<validVariables[i];
        cout<<endl;
    }
    else
        printf("There is no valid variable in this program\n");

    if(sz(invalidVariables) > 0) {
        printf("Invalid Variables are:");
        for(int i = 0; i < sz(invalidVariables); i++)
            cout<<" "<<invalidVariables[i];
        cout<<endl;
    }
    else
        printf("There is no invalid variable in this program\n");

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
