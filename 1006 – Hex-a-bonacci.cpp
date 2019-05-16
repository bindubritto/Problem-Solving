#include<stdio.h>
#define INT long long int

INT hexabonacci[10005];
INT a, b, c, d, e, f;
INT fn( INT n )
{
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;

    if(hexabonacci[n]!=-1)
    {
        return hexabonacci[n];
    }
    else
    {
        hexabonacci[n]=( fn(n-1)%10000007 + fn(n-2)%10000007 + fn(n-3)%10000007 + fn(n-4)%10000007 + fn(n-5)%10000007 + fn(n-6)%10000007 )%10000007;
        return hexabonacci[n];
    }
}
int main()
{

    //for(int i=0; i<=10003; i++)hexabonacci[i]=-1;
    //freopen("in.txt", "r", stdin);

    INT n, caseno = 0, cases, res=0;
    scanf("%lld", &cases);
    while(cases--)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        for(int i=0; i<=10003; i++)hexabonacci[i]=-1;
        res = fn(n)%10000007;
        printf("Case %lld: %lld\n", ++caseno, res);
    }
    return 0;
}
