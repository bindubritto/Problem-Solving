#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    stack<string>backword;
    stack<string>foreward; // foreward for forward; :-)

    //backword.push(intial);
    string a, temp;
    int t, caseno=0;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        string intial = "http://www.lightoj.com/";
        printf("Case %d:\n", ++caseno);
        for(int i=0;true; i++)
        {
            cin>>a;
            if(a == "QUIT")break;
            if(a == "VISIT")
            {
                string b;
                cin>>b;
                backword.push(intial);
                intial = b;
                cout<<intial<<endl;
                for(int i=0; !foreward.empty(); i++)
                {
                    foreward.pop();
                }
            }
            else
            {
                if(a == "BACK")
                {
                    if(!backword.empty())
                    {
                        foreward.push(intial);
                        intial = backword.top();
                        backword.pop();
                        cout<<intial<<endl;

                    }
                    else
                    {
                        cout<<"Ignored"<<endl;
                    }
                }

                else if(a == "FORWARD")
                {
                    if(!foreward.empty())
                    {
                        backword.push(intial);
                        intial = foreward.top();
                        foreward.pop();
                        cout<<intial<<endl;

                    }
                    else
                    {
                        cout<<"Ignored"<<endl;
                    }
                }
            }
        }

        for(int i=0; !backword.empty(); i++)
            backword.pop();

        for(int i=0; !foreward.empty(); i++)
            foreward.pop();
    }

    return 0;
}
