#include<stdio.h>

int main()
{
    long long int n, m, w;
    short int t, caseno=0;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%lld", &w);
        m=1;
        n=w;

        if(w%2==0)
        {
            while(n%2==0)
            {
                m = m*2;
                n/=2;
            }
            printf("Case %d: %lld %lld\n", ++caseno, n, m);
        }
        else
            printf("Case %d: Impossible\n", ++caseno);

    }

    return 0;
}
