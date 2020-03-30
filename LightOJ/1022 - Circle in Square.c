#include<stdio.h>
int main()
{
    int testcase,p;
    double radius,sqr_length,sqr_area,circle_area,shaded_area;
    const double pi=2*acos(0.0);
    scanf("%d",&testcase);
    for(p=1;p<=testcase;p++)
    {
        scanf("%lf",&radius);
 
        sqr_length=radius*2;
        sqr_area=sqr_length*sqr_length;
 
        circle_area=pi*radius*radius;
 
        shaded_area=sqr_area-circle_area;
 
        printf("Case %d: %.2lf\n",p,shaded_area);
    }
    return 0;
}
