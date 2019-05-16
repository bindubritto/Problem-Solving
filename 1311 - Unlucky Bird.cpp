#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    double v1, v2, v3, a1, a2, t1, t2, s1, s2, res, d, time;
    int t, caseno=0;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        s1 = (v1*v1)/(2.0*a1);
        s2 = (v2*v2)/(2.0*a2);
        d = s1+s2;
        t1 = v1/a1;
        t2 = v2/a2;
        time = max(t1, t2);
        res = v3*time;
        printf("Case %d: ", ++caseno);
        printf("%0.10lf %0.10lf\n", d, res);
    }

    return 0;
}
