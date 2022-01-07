#include<stdio.h>
#include<math.h>

int main()
{
    int ax, ay, bx, by, cx, cy, t, caseno=0;
    double  dx, dy, x, y, ab, ad, area;

    //scanf("%d", &t);

    scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);

    ax = double(ax);

    printf("%lf\n", ax);

    x = (bx*1.0) - (ax*1.0);
    y = by - ay;

    dx = (cx*1.0) - x;
    dy = (cy*1.0) - y;

    ab = ((ax-bx)*(ax-bx))*1.0 + ((ay-by)*(ay-by))*1.0;
    ab = sqrt(ab);

    ad = ((ax-dx)*(ax-dx))*1.0 + ((ay-dy)*(ay-dy))*1.0;
    ad = sqrt(ad);

    area = ab*ad;

    printf("%.0lf %.0lf %.0lf\n", dx, dy, area);


    return 0;
}
