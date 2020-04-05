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
using namespace std;
typedef pair<int, int> pii; 
int main()
{
//	fast
	int t,casino = 0;
	scanf("%d",&t);
	while(t--)
	{
		int n,j = 0, c = 0;
		scanf("%d",&n);
		bool ck = true;
		char a[1007];
		//multiset<pii> ms;
		multimap<pii,int> mp;
		for(int i = 0; i<n; i++)
		{
			int s,e;
			scanf("%d%d",&s,&e);
			//ms.insert(make_pair(s,e));
			mp.insert(make_pair(make_pair(s,e),i));
		}
		for(auto k : mp)
		{
			if(j<=k.first.first) 
			{
				
				a[k.second] = 'C';
				j = k.first.second;	
			}
			else if(c<=k.first.first)
			{
				a[k.second]='J';
				c = k.first.second;
			}
			else
				ck = false;
		}
		if(ck)
		{
			printf("Case #%d: ",++casino);
			for(int i = 0; i<n; i++)
				printf("%c",a[i]);
			printf("\n");
			//cout<<a<<"\n";
		}
		else
			printf("Case #%d: IMPOSSIBLE\n",++casino);
		
	}
    return 0;
}
