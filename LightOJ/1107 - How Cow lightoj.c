#include<stdio.h>
int main()
{
    int testcase,i,j,x1,y1,x2,y2,cow_nmbr,x,y;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&cow_nmbr);
        printf("Case %d:\n",i);
        for(j=1;j<=cow_nmbr;j++)
        {
            scanf("%d%d",&x,&y);
            if(x>x1&&x<x2&&y>y1&&y<y2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
