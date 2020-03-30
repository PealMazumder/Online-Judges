#include<iostream>
#include<string>
#include<stack>

using namespace std;
int main()
{
    stack <string> backward_stk;
    stack <string> forward_stk;
    string current,input,url;

    int test,i;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        backward_stk.push("http://www.lightoj.com/");
        cout<<"Case "<<i<<":"<<endl;
        while(1)
        {
            cin>>input;
            if(input=="QUIT")
            {
                break;
            }
            else if(input=="VISIT")
            {
                cin>>url;
                backward_stk.push(url);
                cout<<url<<endl;
                while(!forward_stk.empty())
                    forward_stk.pop();
            }
            else if(input=="BACK")
            {
                if(!backward_stk.empty())
                {
                    current = backward_stk.top();

                    backward_stk.pop();
                    if(!backward_stk.empty())
                    {
                        forward_stk.push(current);
                        current=backward_stk.top();
                        cout<<current<<endl;
                    }

                    else
                    {
                        backward_stk.push(current);
                        cout<<"Ignored"<<endl;
                    }

                }
            }
            else if(input=="FORWARD")
            {
                if(!forward_stk.empty())
                {
                    current=forward_stk.top();
                    forward_stk.pop();
                    backward_stk.push(current);
                    cout<<current<<endl;
                }
                else
                    cout<<"Ignored"<<endl;
            }
        }
        while(!forward_stk.empty())
            forward_stk.pop();
        while(!backward_stk.empty())
            backward_stk.pop();
    }
    return 0;
}
