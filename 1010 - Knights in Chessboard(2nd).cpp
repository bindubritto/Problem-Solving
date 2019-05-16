#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int t, caseno=0, r, c, m, n,res;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &r, &c);

        m=min(r, c);
        n=max(r, c);

        if(m==1)
            printf("Case %d: %d\n", ++caseno, n);
        else if(m==2)
        {

            if(n%2==1)
            {
                res=(m*(n+1))/2;
                printf("Case %d: %d\n", ++caseno, res);
            }
            else if(n%2==0 && (n/m)%2==0)
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

            if(n%2==0)
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
