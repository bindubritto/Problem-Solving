#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<set>
#include<iostream>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    multiset<char>tree1,tree2;

    string s1;
    char a[1005], b[1005];

    gets(a);
    cout<<a<<endl;
    int len = strlen(a);
    //printf("length %d\n", len);
    int j=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]==32)
        {
            continue;
        }
        else if(a[i])
        {
            b[j]=tolower(a[i]);
            tree1.insert(b[j]);
            //printf("%d %c\n",j, b[j]);
            j++;
        }
    }

    b[j]='\0';
    sort(b+0, b+j);

    //printf("j = %d\n", j);
    for(int i=0; i<j; i++)
    {
        printf("%c", b[i]);
    }
    cout<<endl;

    for(multiset<char>::iterator it=tree1.begin();it!=tree1.end();it++){
        cout<<*it;
    }
    cout<<endl;

    if(tree1==tree2)printf("wow\n");


    //printf("%s\n", b);
    //cout<<b<<endl;
    //int  b = tolower(a[0]);
    //char c = tolower(a[0]);
    //printf("%c %d %c\n", a[0], b, c);

    return 0;
}
