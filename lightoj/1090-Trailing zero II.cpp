#include<stdio.h>
#define INT long long int

INT p2p=0, p5p=0;

INT p2(INT n)
{
    int p2=0,result=0;

    for(int i=2;; i=i*2)
    {
        result = n/i;
        if(result==0)break;
        p2+=result;
    }

    return p2;
}

INT p5(INT n)
{
    int p5=0, result=0;
    for(int i=5;; i=i*5)
    {
        result = n/i;
        if(result == 0)break;
        p5+=result;
    }

    return p5;
}

INT pq(INT p, INT q)
{
    int flag = 0;
    p2p=0, p5p=0;
    if(p%2==0||p%5==0)
    {
        while(p%2==0)
        {
            p=p/2;
            p2p++;
        }
        while(p%5==0)
        {
            p= p/5;
            p5p++;
        }
    }

    p2p = p2p*q;
    p5p = p5p*q;
}


int main()
{

    INT n, r, p, q, p2n, p2r, p2n_r, p5n, p5r, p5n_r, power2, power5,T,caseno=0,zero;
    scanf("%lld", &T);
    while(T--)
    {

        zero = 0;
        power2 = 0;
        power5 = 0;
        scanf("%lld", &n);
        scanf("%lld", &r);
        scanf("%lld", &p);
        scanf("%lld", &q);
        p2n = p2(n);
        p5n = p5(n);
        p2r = p2(r);
        p5r = p5(r);
        p2n_r = p2(n-r);
        p5n_r = p5(n-r);
        pq(p,q);

        power2 = ((p2n+p2p)-(p2r+p2n_r));
        power5 = ((p5n+p5p)-(p5r+p5n_r));

        if(power2<power5)
        {
            zero = power2;
        }
        if(power5<power2)
        {
            zero = power5;
        }
        if(power2==power5)
        {
            zero = power5;
        }
        printf("Case %lld: %lld\n", ++caseno, zero);

    }

    return 0;

}


