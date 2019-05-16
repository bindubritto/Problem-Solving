#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
#define INT long long


int main()
{
    //freopen("in.txt", "r", stdin);
    INT T, N, C, t, caseno=0, profit_up, profit_lower;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &N, &C);
        if(C==0 || N==0)
        {
            T = 0;
            printf("Case %lld: %lld\n", ++caseno, T);
        }
        else if(C==N){
            T = 0;
            printf("Case %lld: %lld\n", ++caseno, T);
        }
        else
        {
            long double up, down;
            up = ceil(C*1.0/(2.0*N));
            down = floor(C*1.0/(2.0*N));
            profit_up = C*up - (up*up*N);
            profit_lower = C*down - (down*down*N);

            if(profit_lower>profit_up)
            {
                T = down;
                printf("Case %lld: %lld\n", ++caseno, T);
            }
            else if(profit_lower == profit_up)
            {
                T = down;
                printf("Case %lld: %lld\n", ++caseno, T);
            }
            else{
                T = up;
                printf("Case %lld: %lld\n", ++caseno, T);
            }
        }
    }
    return 0;
}
