#include<stdio.h>
#include<string.h>
int main()
{
    int testcase,a,i,std_number,dust[1000],total=0;
    scanf("%d",&testcase);
    for(a=1;a<=testcase;a++)
    {
        scanf("%d",&std_number);
        for(i=0;i<std_number;i++)
        {
            scanf("%d",&dust[i]);
            if(dust[i]>0)
            {
                total+=dust[i];
            }
        }
        if(total>0)
        {
            printf("Case %d: %d\n",a,total);
        }
        total=0;
    }
    return 0;
}
