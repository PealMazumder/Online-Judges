#include<bits/stdc++.h>
#define sz(c)   (int)c.size()
using namespace std;
void solve()
{
    int numberOfDigits = 0, numberOfSpaces = 0, numberOfChar = 0, numberOfAlpha = 0, numberOfLines = 0;
    string s;
    while(getline(cin, s))
    {
        numberOfLines++;
        numberOfChar += sz(s);
        for(int i = 0; i < sz(s); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                numberOfAlpha++;

            else if(s[i] >= '0' and s[i] <= '9') numberOfDigits++;

            else if(s[i] == ' ') numberOfSpaces++;
        }
    }
    cout<<"Number Of Characters "<<numberOfChar<<"\n";
    cout<<"Number Of Alphabets "<<numberOfAlpha<<"\n";
    cout<<"Number Of Digits "<<numberOfDigits<<"\n";
    cout<<"Number Of Spaces "<<numberOfSpaces<<"\n";
    cout<<"Number Of Lines "<<numberOfLines<<"\n";
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
