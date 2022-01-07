#include<stdio.h>

int minx(int m, int n)
{
    if(m<n)
        return m;
    else
        return n;
}

int maxx(int m, int n)
{
    if(n>m)
        return n;
    else
        return m;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int t, caseno=0, r, c, m, n, quotient, rem, res;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &r, &c);

        m=minx(r, c);
        n=maxx(r, c);

        if(m==1)
            printf("Case %d: %d\n", ++caseno, n);
        else if(m==2)
        {
            rem=n%2;
            quotient=n/m;

            if(rem==1)
            {
                res=(m*(n+1))/2;
                printf("Case %d: %d\n", ++caseno, res);
            }
            else if(rem==0 && quotient%2==0)
            {
                res=(m*n)/2;
                printf("Case %d: %d\n", ++caseno, res);
            }
            else
            {
                res=n+2;
                printf("Case %d: %d\n", ++caseno, res);
            }
        }
        else
        {
            rem=n%2;
            if(rem==0)
            {
                res=(m*n)/2;
                printf("Case %d: %d\n", ++caseno, res);
            }
            else
            {
                res=((m*n)+1)/2;
                printf("Case %d: %d\n", ++caseno, res);
            }
        }

    }

    return 0;
}
