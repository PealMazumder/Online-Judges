#include<stdio.h>
#include<math.h>
int binary(long long n);
int main()
{
    int a, b, c, d, testcase,l,m,n,o,i;
    long long p, q, r, s;
    char dot;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d%c%d%c%d%c%d",&a,&dot,&b,&dot,&c,&dot,&d);
        scanf("%lld%c%lld%c%lld%c%lld",&p,&dot,&q,&dot,&r,&dot,&s);
        l=binary(p);
        m=binary(q);
        n=binary(r);
        o=binary(s);

        if(a==l&&b==m&&c==n&&d==o)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }
    return 0;
}
int binary(long long n)
{
    int decimal=0,j=0,remainder;
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        decimal+=remainder*pow(2,j);
        j++;
    }
    return decimal;
    decimal=0;
}
