#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
  string s, t;
  cin>>s>>t;
  int cnt = 0;
  for(int i = 0; i<s.size(); i++)
  {
    if(s[i]!=t[i])
      cnt++;
  }
  cout<<cnt<<"\n";
}
int main()
{
  solve();
  return 0;
}
