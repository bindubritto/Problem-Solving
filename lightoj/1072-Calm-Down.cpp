#include<stdio.h>
#include<math.h>

int main()
{
    //freopen("in.txt", "r", stdin);

    double R, n, pi, deg, rad, ans;
    int t, caseno=0;
    pi=2*acos(0.0);
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf", &R, &n);
        deg = 360/(2*n);
        rad = (pi*deg)/180;
        ans = (R*sin(rad))/(1+sin(rad));
        printf("Case %d: %0.10lf\n", ++caseno, ans);
    }
    return 0;
}
