#include<stdio.h>
#include<string.h>

int main()
{

    //freopen("in.txt", "r", stdin);
    int len, i, caseno=0, t;
    char str[205];
    long long m, rem;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%s", str);
        scanf("%lld", &m);

        len = strlen(str);

        i=0;
        rem=0;
        if(str[0]=='-')
        {
            i=1;
        }

        for(i; i<len; i++)
        {
            rem = ((rem*10)+str[i]-48)%m;
        }

        if(rem==0)
        {
            printf("Case %d: divisible\n", ++caseno);
        }
        else
            printf("Case %d: not divisible\n", ++caseno);

    }

    return 0;
}
