#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        double v1,v2,v3,a1,a2,d,b_covered,t1,t2;
        cin>>v1>>v2>>v3>>a1>>a2;
        d=(((v1*v1)/(2*a1))+((v2*v2)/(2*a2)));
        t1=(v1/a1);
        t2=(v2/a2);
        if(t2>t1)
        {
            b_covered=t2*v3;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<d<<" "<<fixed<<setprecision(10)<<b_covered<<endl;
        }
        else
        {
            b_covered=t1*v3;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<d<<" "<<fixed<<setprecision(10)<<b_covered<<endl;}
        }
    return 0;
}
