#include<stdio.h>
int main()
{
    int input,sum=0,i;
    scanf("%d",&input);
    if(input<=0)
    {
        for(i=input;i<=1;i++)
        {
            sum+=i;
        }
    }
    else
    {
        for(i=1;i<=input;i++)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    
    return 0;
}
