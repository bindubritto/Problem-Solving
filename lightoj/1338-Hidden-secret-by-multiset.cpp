#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<set>
#include<iostream>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int caseno=0, t;
    char a[105], b[105], temp, c;
    scanf("%d", &t);
    scanf("%c", &c);
    while(t--)
    {
        gets(a);
        gets(b);
        multiset<char>tree1,tree2;

        int len = strlen(a);
        for(int i=0; i<len; i++)
        {
            if(a[i]==32)continue;
            else if(a[i])
            {
                temp=tolower(a[i]);
                tree1.insert(temp);
            }
        }

        len = strlen(b);
        for(int i=0; i<len; i++)
        {
            if(b[i]==32)continue;
            else if(b[i])
            {
                temp=tolower(b[i]);
                tree2.insert(temp);
            }
        }

        if(tree1==tree2)
            printf("Case %d: Yes\n", ++caseno);
        else
            printf("Case %d: No\n", ++caseno);
    }
    return 0;
}
