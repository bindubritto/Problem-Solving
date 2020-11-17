#include<stdio.h>
#include<math.h>

int main()
{
    int i, t;
    double rad, pi,area,sa,ca;


    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%lf", &rad);
        pi=2*acos(0.0);
        area=4*rad*rad-pi*rad*rad;
        printf("Case %d: %.2lf\n", i, area);
    }
    return 0;
}
