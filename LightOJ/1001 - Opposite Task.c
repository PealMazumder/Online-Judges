#include<stdio.h>
int main()
{
    int test_case,i,problems,each_computer;
    scanf("%d",&test_case);
    for(i=1;i<=test_case;i++)
    {
        scanf("%d",&problems);
        each_computer=problems/2;
        if(problems%2==0)
        {
            printf("%d %d\n",each_computer,each_computer);
        }
        else
        {
            printf("%d %d\n",each_computer,(each_computer+1));
        }
    }
    return 0;
}
