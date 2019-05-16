#include<stdio.h>
#include<math.h>

#define INT long long int

static bool status[10000000];
INT N=10000000, prime[665000], mod=1000000007;

int power(INT base, INT p, INT mod)
{
    INT res=1;
    while(p!=0)
    {
        if(p%2==1)
        {
            res = res*base;
            res = res % mod;
        }
        base = base * base;
        base = base % mod;
        p = p/2;
    }
    return res;
}

void sieve()
{
    int sqrtn = int(sqrt((double)N));

    for(int i=3; i<=sqrtn; i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i; j<=N; j+=2*i)
            {
                status[j]=1;
            }
        }
    }
    prime[0]=2;
    for(int i=3, k=1; i<=N; i+=2)
    {
        if(status[i]==0)
        {
            prime[k]=i;
            k++;

        }
    }
}

INT sod(INT m, INT n)
{
    INT result=1, p=1, pow, newm=1, deno=1;
    if(m==mod)return 1;
    // newm = newmerator, deno = denomerator;; leonardo boshel.
    for(int i=0; prime[i]*prime[i]<=m; i++)
    {
        if(m%prime[i]==0)
        {
            pow = 0;
            while(m%prime[i]==0)
            {
                m = m / prime[i];
                pow++;
            }
            p = pow*n;
            newm = (power(prime[i], p+1, mod)-1)%mod;
            deno = (power(prime[i]-1, mod-2, mod))%mod;

            result = (result)%mod * (newm%mod * deno%mod)%mod;

        }
    }


    if(m>1)
    {
        newm = (power(m, n+1, mod)-1)%mod;
        deno = power(m-1, mod-2, mod)%mod;

        result = (result)%mod * (newm%mod * deno%mod)%mod;
    }

    return result%mod;
}


int main()
{
    sieve();

    INT a, b, ans, res=1, caseno=0, t;

    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &a, &b);

        res = sod(a, b);
        printf("Case %lld: %lld\n", ++caseno, res);
    }

    return 0;
}
