#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define sz(c)						(int)c.size()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define MAX(a, b)					((a) > (b) ? (a) : (b))
using namespace std;
const int INF = 0x7f7f7f7f;
const int modu = 1e9 + 7;
const int N = 2e6+7;
int lps[N];
int kmpPrepocess(string const& s)
{
	string text = s;
	reverse(text.begin(),text.end());
	string p = s + "@" + text;
	int len = sz(p);
	for(int l = 0, r = 1; r<len;)
	{
		if(p[l] == p[r])
			lps[r] = l + 1, r++,l++;
		else
		{
			if(l == 0)
				lps[r] = 0, r++;
			else
				l = lps[l-1];
		}
	}
	return lps[len-1];
}
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
	//	mem(lps,0);
		string s;
		cin>>s;
		int l = 0, r = sz(s) - 1;
		while(l<r)
		{
			if(s[l] == s[r])
				l++,r--;
			else break;
		}
		cout<<s.substr(0,l);
		string end = s.substr(0,l);
		reverse(end.begin(),end.end());
		string pattrn = s.substr(l, r-l+1);
		int mid1 = kmpPrepocess(pattrn);
		reverse(pattrn.begin(),pattrn.end());
		int mid2 = kmpPrepocess(pattrn);
		if(mid1>mid2)
			cout<<pattrn.substr(sz(pattrn) - mid1, mid1);
		else
			cout<<pattrn.substr(0,mid2);
		cout<<end<<"\n";
		 
	}
    return 0;
}