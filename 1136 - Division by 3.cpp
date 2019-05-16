#include<stdio.h>

int main()
{
    long long int lft, right, LHS=0, RHS=0;

    int caseno=0, t, mod;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%lld %lld", &lft, &right);

        LHS=0, RHS=0;

        lft = lft - 1;

        if(lft==0)
        {
            lft = 0;
        }
        else if(lft==1)
        {
            lft = 0;
        }
        else if(lft==2)
        {
            lft = 1;
            LHS+=lft;
        }
        else
        {
            mod = lft%3;
            if(mod==2)
            {
                LHS = 1;
            }

            lft = (lft/3)*2;
            LHS+=lft;
        }

        mod = right%3;
        if(mod==2)
        {
            RHS = 1;
        }

        right = (right/3)*2;
        RHS+=right;

        printf("Case %d: %lld\n",++caseno, RHS-LHS);

    }
    return 0;
}
