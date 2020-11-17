#include<stdio.h>
//#define int long long int

int ext_euclid(int a, int b, int *X, int *Y)
{
    int x1, x2, y1, y2, r1, r2, q, r, x, y;
    x1=0, x2=1;
    y1=1, y2=0;
    for(r2=a, r1=b; r1!=0;)
    {
        q=r2/r1;
        r=r2%r1;
        x=x2 - (q*x1);
        y=y2 - (q*y1);
        x2=x1;
        x1=x;
        y2=y1;
        y1=y;
        r2=r1;
        r1=r;
    }
    *X=x2;
    *Y=y2;
    return r2;
}

int main()
{

    int a, b, X, Y;
    scanf("%d %d", &a, &b);
    int ans = ext_euclid(a, b, &X, &Y);
    printf("%d %d %d", ans, X, Y);

    //printf("Hello World\n");

    return 0;
}
