#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

bool compare(pair<string, int>a, pair<string, int>b)
{
    if(a.second>b.second)
        return true;
    else
        return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    vector< pair<string, int> >pr;
    string str;
    int a, b, c, t, caseno=0, student;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &student);

        for(int i=0; i<student; i++)
        {

            cin>>str>>a>>b>>c;
            pr.push_back(make_pair(str, (a*b*c)));
        }

        sort(pr.begin(), pr.end(), compare);

        int diff=pr[0].second-pr[student-1].second;

        if(diff>0){
            cout<<"Case "<<++caseno<<": "<<pr[0].first<<" took chocolate from "<<pr[student-1].first<<endl;
        }
        else if(diff==0){
            cout<<"Case "<<++caseno<<": no thief"<<endl;
        }
        pr.clear();
    }
    return 0;
}
