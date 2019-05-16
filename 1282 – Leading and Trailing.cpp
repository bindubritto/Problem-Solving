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
    char str1[4], str2[4];

    scanf("%lld", &t);

    while(t--){

    scanf("%lld %lld", &n, &k);


    leading = LeadingDigit(n, k, digit);
    trailing = power(n, k, 1000);

    res = trailing;

    //res = 0;

    rem = res%10;
    sprintf(str1, "%lld", rem);
    res = res/10;

    for(int i=0;i<2;i++){
        rem = res%10;
        sprintf(str2, "%lld", rem);
        strcat(str1, str2);
        res = res/10;

    }

    //printf("%s", str1);
    int i, j;
    for(i=0, j=2;i<3;i++, j--){
        str2[i]=str1[j];
    }
    str2[3]='\0';

    //puts(str1);
    //puts(str2);

    printf("Case %lld: %lld %s\n",++caseno, leading, str2);
    //printf("Trailing = %03lld\n", trailing);

    }
    return 0;
}
