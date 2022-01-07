#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)

int main()
{
    //freopen("in.txt", "r", stdin);
    int t, caseno=0;
    double r1, r2, h, p, x, mid, ans;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);
        x=h-p;
        mid=((h*(r1+r2))-(x*r1)-(p*r2))/h;
        ans=(pi*p*((mid*mid)+(mid*r2)+(r2*r2)))/3.0;
        printf("Case %d: %0.10lf\n", ++caseno, ans);
    }

    return 0;
}
