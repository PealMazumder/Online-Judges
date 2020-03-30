#include<stdio.h>
#include<math.h>
int main()
{
    int testcase,i;
    double angle1,angle2,angle3,side1,side2,side3;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%lf%lf%lf",&side1,&side2,&side3);
       
        angle1=(side2*side2)+(side3*side3)-(side1*side1);
        angle2=(side1*side1)+(side3*side3)-(side2*side2);
        angle3=(side2*side2)+(side1*side1)-(side3*side3);
 
        if(angle1==0.0||angle2==0.0||angle3==0.0)
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
 
    }
    return 0;
}
