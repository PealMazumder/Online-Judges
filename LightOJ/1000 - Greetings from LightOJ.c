#include<stdio.h>
int main()
{
    int testcase,i,input1,input2;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d%d",&input1,&input2);
        printf("Case %d: %d\n",i,(input1+input2));
    }
    return 0;
}
