#include<stdio.h>
#include<string.h>
int factorial(int a,int b);
int main()
{
    int n,length,answer;
    char k[20];
    scanf("%d %s",&n,k);
    length = strlen(k);
    answer=factorial(n,length);
    printf("%d\n",answer);
    return 0;
}
int factorial(int a, int b)
{
    int i,j,result=1,p;
    p=a%b;
    if(p==0)
    {
        for(j=0,i=a;i>=b;j++,i=(a-j*b))
        {
            result*=i;
        }
    }
    else if(p!=0)
    {
        for(j=0,i=a;i>=p;j++,i=(a-j*b))
        {
            result*=i;
        }
    }

    return result;

}
