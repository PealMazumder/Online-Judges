#include<bits/stdc++.h>
#define         sz(c)               (int)c.size()
using namespace std;

void solve()
{
    string s;
    cout<<"Enter a String: ";
    getline(cin, s);

    int state = 0, i = 0;
    while(i < sz(s)) {
        switch(state){
        case 0:
            if(s[i] == 'a') state = 1;
            else if(s[i] == 'b') state = 2;
            else state = 6;
            break;
        case 1:
            if(s[i] == 'a') state = 1;
            else if(s[i] == 'b') state = 4;
            else state = 6;
            break;
        case 2:
            if(s[i] == 'b') state = 2;
            else if(s[i] == 'a') state = 3;
            else state = 6;
            break;
        case 3:
            if(s[i] == 'b') state = 4;
            else state = 6;
            break;
        case 4:
            if(s[i] == 'b') state = 5;
            else state = 6;
            break;
        case 5:
            if(s[i]) state = 6;
            break;
        case 6:
            cout<<s<<" is a invalid string for the given regular expression\n";
            exit(0);

        }
        i++;
    }
    if(state == 5)
        cout<<s<<" is a valid string for the given regular expression\n";
    else cout<<s<<" is a invalid string for the given regular expression\n";
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    ios::sync_with_stdio(false);
//    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}
