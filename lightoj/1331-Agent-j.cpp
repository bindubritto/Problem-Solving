#include<stdio.h>
#include<math.h>

int main()
{
    int caseno=0, t;

    double R1, R2, R3, a, b, c, s, area_tri, temp, point_a, point_b, point_c;
    double theta_a, theta_b, theta_c, area_a, area_b, area_c, area_arc, result;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%lf %lf %lf", &R1, &R2, &R3);

        a = R1 + R2;
        b = R2 + R3;
        c = R3 + R1;
        s = (a+b+c)/2.0;

        temp = s*(s-a)*(s-b)*(s-c);
        area_tri = sqrt(temp);

        point_a = (b*b + c*c - a*a)/(2*b*c);
        point_b = (c*c + a*a - b*b)/(2*c*a);
        point_c = (a*a + b*b - c*c)/(2*a*b);

        theta_a = acos(point_a);
        theta_b = acos(point_b);
        theta_c = acos(point_c);

        area_a = (theta_a*R3*R3)/(2.0);
        area_b = (theta_b*R1*R1)/(2.0);
        area_c = (theta_c*R2*R2)/(2.0);

        area_arc = area_a + area_b + area_c;

        result = area_tri - area_arc;
        printf("%lf\n", area_tri);

        printf("Case %d: %0.10lf\n", ++caseno, result);

    }
    return 0;
}
