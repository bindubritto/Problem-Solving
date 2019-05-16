#include<stdio.h>
#include<math.h>

#define INT long long int

double distance(int x1, int x2, int y1, int y2)
{
    INT X, Y;

    X = (x1 - x2)*(x1 - x2);

    Y = (y1 - y2)*(y1 - y2);

    double result =(sqrt(X+Y));


    return result;
}

int main()
{

    int ox, oy, ax, ay, bx, by,t,caseno=1;
    double a, b, o, k, s, r, theta;
    scanf("%d", &t);

    while(t--)
    {

        scanf("%d %d", &ox, &oy);
        scanf("%d %d", &ax, &ay);
        scanf("%d %d", &bx, &by);

        b = distance(ox,ax,oy,ay);

        a = distance(ox,bx,oy,by);

        o = distance(ax,bx,ay,by);

        k = (a*a+b*b-o*o)/(2*a*b);

        theta = acos(k);

        r = a;

        s = r*theta;

        printf("Case %d: %.5lf\n",caseno++,s);
    }
    return 0;

}
