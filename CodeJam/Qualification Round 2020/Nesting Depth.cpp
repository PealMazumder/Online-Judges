#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
#define sz(c)						(int)c.size()
#define pii pair< int, int >
#define psi pair< string, int >
using namespace std;
const int INF = 0x7f7f7f7f;
const int modu = 998244353;
const int N = 1e5+1;
int main()
{
//	fast
	int t,casino = 0;
		map<char,int> mp = {{'0',0},{'1',1},{'2',2},{'3',3},
						{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};
	scanf("%d",&t);
	while(t--)
	{
		char s[105];
		scanf("%s",s);
		int len = strlen(s);
		string a = "";
		stack<char> b;
		for(int i = 0; i<len; i++)
		{
			int x = mp[s[i]];
			if(b.empty())
			{
				for(int j = 0; j<x; j++)
				{
					b.push('(');
					a+='(';
				}
				a+=s[i];
			}
			else if(!b.empty())
			{
				int ln = sz(b);
				if(ln>x)
				{
					for(int j = 0; j<ln-x; j++)
					{
						b.pop();
						a+=')';
					}
					a+=s[i];
				}
				else if(ln<x)
				{
					for(int j = 0; j<x-ln; j++)
					{
						b.push('(');
						a+='(';
					}
					a+=s[i];
				}
				else
					a+=s[i];
			}
		}
		while(!b.empty()) 
		{
			a+=')';
			b.pop();
		}
		printf("Case #%d: ",++casino);
		cout<<a<<"\n";
	}
    return 0;
}

