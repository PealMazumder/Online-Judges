#include<stdio.h>
int main()
{
    int testcase,i,my_p,lift_p,total_time;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d%d",&my_p,&lift_p);
 
        if(my_p<lift_p)
        {
            total_time=((lift_p-my_p)*4 + 19+(my_p*4));
        }
        else
        {
            total_time=((my_p-lift_p)*4 + 19+(my_p*4));
        }
 
        printf("Case %d: %d\n",i,total_time);
    }
    return 0;
}
