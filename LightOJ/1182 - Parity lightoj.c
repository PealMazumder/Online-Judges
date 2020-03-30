#include<stdio.h>
int main()
{
    int testcase,input,i,remainder[20],count=0,j;
 
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d",&input);
 
        for(j=0;input>0;j++)
        {
            remainder[j]=input%2;
            if(remainder[j]==1)
                count++;
 
            input=input/2;
        }
        if(count%2==0)
            printf("Case %d: even\n",i);
 
        else
            printf("Case %d: odd\n",i);
 
        count=0;
    }
    return 0;
 
}
