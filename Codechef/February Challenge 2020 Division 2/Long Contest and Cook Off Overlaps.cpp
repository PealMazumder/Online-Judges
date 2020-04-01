#include<bits/stdc++.h>
#define ll						long long
#define nl						"\n"
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int N = 401;
int dp[N];
bool leapY(int y)
{
	if(y%400 == 0 || y % 4 == 0 && y % 100 != 0) 
		return true;
	else 
		return false;
}
bool fday(int y)
{
	int res,cen = 0,fixed = 5;
	int tem = y;
	if(y%400<100)
	{
		cen = 6;
		y %= 400;
	//	cout<<y<<nl;
	}
	else if(y%400<200)
	{
		y %= 400;
		y -= 100;
		cen = 4;
	}
	else if(y%400<300)
	{
		cen = 2;
		y %= 400;
		y -= 200;
	}
	else if(y%400<400)
	{
		cen = 0;
		y %= 400;
		y -= 300;
	}
	int lp = y/4;
	if(y%4 == 0 && y != 0) y--;
	int total = cen + fixed + lp + y;
	res = total%7;
	bool ck = leapY(tem);
	if(res == 0) return true;
	
	else if(res == 1 &&  ck == false)
		return true;
	else return false;
	
}
void Save()
{
	dp[0] = 0;
	for(int i = 1;i<N;i++)
	{
		if(fday(i))
		{
			dp[i] = dp[i-1] + 1;
		}
		else
			dp[i] = dp[i-1];
	}
}
int main()
{
//	FO;
	Save();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m1,m2,y1,y2;
		scanf("%d %d",&m1,&y1);
		scanf(" %d %d",&m2,&y2);
		int s,e;
		(m1<=2) ? s = y1 : s = y1+1; 
		(m2>=2) ? e = y2 : e = y2-1; 
//		e%=400;
//		s%=400;

		int divs = (s-1)/400;
		int dive = e/400;
		int rems = (s-1)%400;
		int reme = e%400;
		int  totale = (dive * 101) + dp[reme];
		int totals = (divs * 101) + dp[rems];
		ll ans = totale - totals;
		printf("%lld\n",ans);
		
	}	

    return 0;
}

