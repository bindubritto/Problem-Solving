#include<stdio.h>

#define INT long long int

int main()
{

    //freopen("in.txt", "r", stdin);
    INT i, j, res, n, m, t, caseno=0;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &n, &m);
        res=1;

        if(n>m)
        {
            i=(n+1)-m;
            j=1;
            for(i; j<=m; j++)
            {
                res=(res*i*i)/j;
                i++;
            }
        }
        else if(n==m)
        {
            for(i=1; i<=n; i++)
            {
                res*=i;
            }
        }
        else
            res = 0;

        printf("Case %lld: %lld\n", ++caseno, res);
    }

    return 0;
}
