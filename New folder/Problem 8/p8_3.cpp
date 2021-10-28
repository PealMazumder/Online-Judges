#include<bits/stdc++.h>
#define         sz(c)               (int)c.size()
using namespace std;
void solve()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);

    int state = 0, i = 0;
    int a = 0, b = 0, c = 0;
    while(i < sz(s)) {
        switch(state) {
        case 0:
            if(i+1 < sz(s) && s[i] == 'a' && s[i+1] == 'b') state = 1, a++;
            else state = 3;
            i += 2;
            break;
        case 1:
            if(i+1 < sz(s) && s[i] == 'a' && s[i+1] == 'b') state = 1, i++;
            else if(i+1 == sz(s) && s[i] == 'a') state = 2, c++;
            else state = 3;
            i++;
            break;
        case 2:
            if(s[i]) state = 3;
            i++;
            break;
        case 3:
            cout<<a<<" "<<b<<" "<<c<<endl;
            cout<<s<<" is a invalid string for the given regular expression\n";
            exit(0);
        }
    }
    if(state == 2)
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
