#include<bits/stdc++.h>
#define         sz(c)               (int)c.size()
using namespace std;
struct value{
    char ch;
    int idx;
};
int precedenceValue(char opera)
{
    if(opera == '+' or opera == '-') return 1;
    else if(opera == '*' or opera == '/') return 2;
    else return -1;
}
bool isOperator(char ch)
{
    return (ch == '+' or ch == '-' or ch == '*' or ch == '/');
}
void solve()
{
    string s;
    cout<<"Enter an Expression: ";
    getline(cin, s);

    stack<value> st;

    for(int i = 0; i < sz(s); i++) {
        char curr = s[i];
        if(isOperator(curr)) {
            while(!st.empty() && precedenceValue(curr) < precedenceValue(st.top().ch)){
                cout<<st.top().ch << " "<<st.top().idx<<endl;
                st.pop();
            }
            st.push({curr, i+1});
        }
        else if(curr == '(') st.push({curr, i+1});
        else if(curr == ')')
        {
            while(st.top().ch != '(')
            {
                cout<<st.top().ch << " "<<st.top().idx<<endl;
                st.pop();
            }
            st.pop();
        }
    }
    while(!st.empty())
    {
        cout<<st.top().ch<<" "<<st.top().idx<<endl;
        st.pop();
    }
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
