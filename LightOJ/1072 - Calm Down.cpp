#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define pi acos(-1)
int main()
{
	int test,temp,n;
	double R,angle,ans;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
		cin>>R>>n;
		angle= sin (pi/n);
		ans=(angle*R)/(1+angle);
		temp=(int) ans;
		if(ans!=temp)
			cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<ans<<endl;
		else
			cout<<"Case "<<i<<": "<<fixed<<setprecision(0)<<ans<<endl;
	}
	return 0;
}
