#include<stdio.h>
#include<math.h>
#define INT long long
int main()
{
    //freopen("in.txt", "r", stdin);
    INT x, b, p, temp, caseno=0, t;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &x);
        if(x<0)
        {
            x*=-1;
            for(p=31; p>0; p-=2)
            {
                b = round(pow(x*1.0, 1.0/(p*1.0)));
                temp = round(pow(b, p));
                if(temp==x)
                {
                    printf("Case %lld: %lld\n", ++caseno, p);
                    break;
                }
            }
        }
        else
        {
            for(p=32; p>0; p--)
            {
                b = round(pow(x*1.0, 1.0/(p*1.0)));
                temp = round(pow(b, p));
                if(temp==x)
                {
                    printf("Case %lld: %lld\n", ++caseno, p);
                    break;
                }
            }

        }
    }
    return 0;
}
