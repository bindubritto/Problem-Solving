#include<stdio.h>

int main()
{

    int caseno=0, t;
    long long int n, m, part, sum=0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%lld %lld", &n, &m);

        part = n/(2*m);

        sum = m*m*part;

        printf("Case %d: %lld\n", ++caseno, sum);

        sum = 0;

    }

    return 0;
}
