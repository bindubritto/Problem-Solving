#include<stdio.h>

int main()
{
    int t, cows, c1, c2, x1, x2, y1, y2, caseno=0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &cows);
        printf("Case %d:\n", ++caseno);
        while(cows--)
        {
            scanf("%d %d", &c1, &c2);

            if( ((c1>x1)&&(c2>y1)) && ((c1<x2)&&(c2<y2)) )
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }

    return 0;
}
