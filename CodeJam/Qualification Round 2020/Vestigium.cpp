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
#define ll						long long
using namespace std;

int main()
{
    int t,casino = 0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int v[102][102];
        ll sum = 0, ar = 0, ac = 0;
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                scanf("%d",&v[i][j]);
            }
            
        }
        for(int i = 0; i<n; i++)
        {
            set<int> r,c;
            for(int j = 0; j<n; j++)
            {
                if(i == j)
                    sum+=v[i][j];
                    
                r.insert(v[i][j]);
                c.insert(v[j][i]);
            }
            if(sz(r) < n)
                ar++;
            if(sz(c) < n)
                ac++;
            
        }
        printf("Case #%d: %lld %lld %lld\n",++casino,sum,ar,ac);
    }
}
