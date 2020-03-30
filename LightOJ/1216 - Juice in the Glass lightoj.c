#include<stdio.h>
#include<math.h>
 
#define pi acos(-1)
int main()
{
    int r1,r2,h,p,testcase,i,j;
    double R,V;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d%d%d%d",&r1,&r2,&h,&p);
        R=r2+((r1-r2)*(double)p/h);
        V=(pi * p*(R*R+R*r2+r2*r2))/3;
 
        printf("Case %d: %.9lf\n",i,V);
    }
    return 0;
}
