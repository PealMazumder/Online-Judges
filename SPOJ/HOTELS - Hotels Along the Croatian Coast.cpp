#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
    }
    int sum = 0,i=0,j=0,ans = 0;
    while(i < n)
    {
        while(j < n && sum+a[j] <= m)
        {
            sum += a[j];
            j++;
        }
        ans = max(sum, ans);
        sum -= a[i];
        i++;
    }
    cout<<ans<<endl;

    return 0;
}
