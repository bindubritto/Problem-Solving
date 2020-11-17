#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string a="A";
vector<char>ans;
bool visited[30];
int count=0, N, K;

void permute(int pos)
{
    if(pos>a.size())
    {
        //printf("hello\n");
        for(int i=0; i<ans.size(); i++)
        {
            //cout<<ans[i];
            printf("%c", ans[i]);
        }
        //cout<<endl;
        printf("\n");
        count++;
        return;
    }

    for(int i=0; i<a.size(); i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            ans.push_back(a[i]);
            permute(pos+1);
            if(count==K)return;
            //printf("Count  %d\n", count);
            visited[i]=0;
            ans.pop_back();
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int t, caseno=0;
    scanf("%d", &t);
    while(t--)
    {
        for(int i=0;i<30;i++){
            visited[i]=0;
        }
        scanf("%d %d", &N, &K);
        getchar();
        for(int i=1; i<N; i++)
        {
            a += ('A'+i);
        }
        //cout<<a<<endl;
        printf("Case %d:\n", ++caseno);
        permute(1);
        count=0;
        a="A";
        ans.clear();

    }
    return 0;
}
