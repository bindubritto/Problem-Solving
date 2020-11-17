#include<deque>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    deque<int>dq;
    string s;
    int a, sizee, operation, t, caseno=0;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &sizee, &operation);
        printf("Case %d:\n", ++caseno);
        for(int i=0; i<operation; i++)
        {
            cin>>s;
            if(s == "pushLeft")
            {
                cin>>a;
                dq.push_front(a);
                if(dq.size()>sizee)
                {
                    printf("The queue is full\n");
                    dq.pop_front();
                }
                else
                {
                    //dq.push_front(a);
                    printf("Pushed in left: %d\n", a);
                    //cout<<dq.size()<<endl;
                }
            }
            else if(s == "pushRight")
            {
                cin>>a;
                dq.push_back(a);
                if(dq.size()>sizee)
                {
                    printf("The queue is full\n");
                    dq.pop_back();
                }
                else
                {
                    //dq.push_back(a);
                    printf("Pushed in right: %d\n", a);
                    //cout<<dq.size()<<endl;
                }
            }
            else if(s == "popLeft")
            {
                if(!dq.empty())
                {
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
            else if(s == "popRight")
            {
                if(!dq.empty())
                {
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
        }

        dq.clear();
    }
    return 0;
}
