#include<stdio.h>
#define INT long long int
INT MOD=1000003;
INT fact[1000005];

void factorial()
{
    INT i=1;
    INT N=1;
    fact[0]=1;
    while(N!=1000004){
        fact[i] = (fact[i-1]*N)%MOD;
        N++;
        i++;
    }
}

int power(INT base, INT p, INT m)
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

int main()
{

    //freopen("in.txt", "r", stdin);

    factorial();

    INT t, caseno=0, n, r, n_r, ans=0;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld %lld", &n, &r);

        n_r = n-r;
        n = fact[n];
        r = power(fact[r], MOD-2, MOD);
        n_r = power(fact[n_r], MOD-2, MOD);

        ans = (n*r)%MOD;
        ans = (ans*n_r)%MOD;

        printf("Case %lld: %lld\n",++caseno, ans);
        ans=0;
    }

    return 0;
}
