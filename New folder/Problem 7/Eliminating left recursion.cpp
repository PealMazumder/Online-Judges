#include<bits/stdc++.h>
#define         nl                  "\n"
#define         sz(c)               (int)c.size()
using namespace std;

void solve()
{
    char nonTerminal;
    int numOfproduction;
    string production;

    cout<<"Enter Number of Prodution: \n";
    cin>>numOfproduction;
    cin.ignore();

    cout<<"Enter the grammars: ";
    for(int i = 0; i < numOfproduction; i++)
    {
        string production, right = "";
        getline(cin, production);
        cout<<"Grammar: "<<production;
        production += '\n';

        for(int i=0; i<production.size(); )
        {
            if(production[i] == '-' && production[i+1]=='>')
            {
                i += 2;
                while(production[i] != '\n')
                {
                    right += production[i];
                    i++;
                }
                break;
            }
            else
            {
                nonTerminal = production[i];
                i++;
            }
        }
        right += '|';
        vector<string> alpha, beta;
        string curr = "";
        for(int i = 0; i<sz(right); i++)
        {
            if(right[i] == '|')
            {
                if(curr[0] == nonTerminal)
                    alpha.push_back(curr.substr(1));
                else beta.push_back(curr);
                curr = "";
            }
            else curr += right[i];
        }
        if(sz(alpha) == 0)
            cout<<" is not Left Recursive\n";
        else
        {
            cout<<" is left Recursive.\n";
            cout<<"Grammar without left recursive.\n";
            string p1 = "", p2 = "";
            for(int i = 0; i<sz(beta); i++)
            {
                if(sz(p1) == 0)
                    p1 += beta[i] + nonTerminal + "'";
                else p1 += "|"+beta[i] + nonTerminal + "'";
            }

            for(int i = 0; i<sz(alpha); i++)
            {
                if(sz(p2) == 0)
                    p2 += alpha[i] + nonTerminal + "'";
                else p2 += "|"+alpha[i] + nonTerminal + "'";
            }
            p2 = p2+"|eps";
            cout<<nonTerminal<<"->"<<p1<<endl<<nonTerminal<<"'->"<<p2<<endl;
        }
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
