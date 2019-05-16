#include<stdio.h>

int main()
{
    long int a, b, count=0, res=0, caseno=0;
    int t;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%ld %ld", &a, &b);
        res=0;
        count=0;
        for(;;)
        {
            res=(res*10 + b)%a;
            count++;
            if(res==0)break;
        }

        printf("Case %ld: %ld\n", ++caseno, count);

    }

    return 0;
}
