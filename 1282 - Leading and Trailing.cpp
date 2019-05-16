#include<stdio.h>
#include<math.h>
#include<string.h>
#define INT long long int

const double eps=1e-9;

INT power(INT base, INT p, INT m)
{
    INT res=1;

    while(p!=0)
    {
        if(p%2==1)
        {
            res = res*base;
            res = res%m;
        }
        base = base*base;
        base = base%m;
        p = p/2;
    }
    return res;
}


INT LeadingDigit(INT n, INT k, INT digit)
{
    double m=0, B, q;
    INT i;

    m = log10(n);
    m = m*k;

    q = m - floor(m+eps);
    B = pow(10, q);

    for(i=0; i<digit-1; i++)
    {
        B*=10;
    }

    return floor(B+eps);
}

int main()
{

    INT n, k, digit=3, caseno=0, t, leading, trailing, res, rem;

    scanf("%lld", &t);

    while(t--){

    scanf("%lld %lld", &n, &k);

    leading = LeadingDigit(n, k, digit);
    trailing = power(n, k, 1000);

    printf("Case %lld: %lld %03lld\n",++caseno, leading, trailing);

    }
    return 0;
}
