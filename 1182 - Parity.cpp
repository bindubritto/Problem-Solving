#include<stdio.h>

int main()
{
    long long n;
    int caseno=0, t, rem, count;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%lld", &n);
        count=0;

        while(n!=0)
        {
            rem = n%2;
            if(rem == 1)count++;
            n = n/2;
        }

        if(count%2==0){
            printf("Case %d: even\n", ++caseno);
        }
        else
            printf("Case %d: odd\n", ++caseno);
    }

    return 0;
}
