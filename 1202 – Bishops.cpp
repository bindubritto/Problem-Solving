#include<stdio.h>
#include<math.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    int r1, r2, c1, c2, n1, n2, caseno=0, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        n1 = fabs(r1-c1);
        n2 = fabs(r2-c2);
        if(n1%2==n2%2)
        {
            if(fabs(r1-r2)==fabs(c1-c2))
            {
                printf("Case %d: %d\n", ++caseno, 1);
            }
            else
                printf("Case %d: %d\n", ++caseno, 2);
        }
        else
            printf("Case %d: impossible\n", ++caseno);
    }
    return 0;
}
