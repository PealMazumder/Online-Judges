/*
	https://hellohasan.com/2016/12/30/deque-double-ended-queue-cpp-stl/
	Above article may help you to understand deque.
*/
#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
   
    int t_case,Case = 0;
    cin>>t_case;
    while(t_case--)
    {
    	int s,noOfc;
    	cin>>s>>noOfc;
    	deque <int> d;
    	cout<<"Case "<<++Case<<":"<<nl;
    	while(noOfc--)
    	{
    		int data;
    		string com;
    		cin>>com;
    		if(com == "pushLeft")
    		{
    			cin>>data;
    			if(d.size()==s)
					cout<<"The queue is full"<<nl;
				else
    			{
    				d.push_back(data);
    				cout<<"Pushed in left: "<<data<<nl;
				}
			}
			else if(com == "pushRight")
    		{
    			cin>>data;
    			if(d.size()==s)
					cout<<"The queue is full"<<nl;
	    		else
	    		{
	    			d.push_front(data);
	    			cout<<"Pushed in right: "<<data<<nl;
				}
			}
			else if(com == "popLeft")
    		{
    			if(d.empty())
					cout<<"The queue is empty"<<nl;
    			else
    			{
    				auto x = d.back();
	    			d.pop_back();
	    			cout<<"Popped from left: "<<x<<nl;
				}
			}
			else if(com == "popRight")
    		{
    			if(d.empty())
					cout<<"The queue is empty"<<nl;
    			else
    			{
    				auto x = d.front();
	    			d.pop_front();
	    			cout<<"Popped from right: "<<x<<nl;
				}
			}
			
		}
	}
    return 0;
}

