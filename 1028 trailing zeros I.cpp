#include<stdio.h>
#include<math.h>

#define INT long long int

static bool status[1100000];
long N=1000100, prime[79000];
void sieve()
{
    long sqrtn = long(sqrt((double)N));

    for(long i=3; i<=sqrtn; i+=2)
    {
        if(status[i]==0)
        {
            for(long j= i*i; j<=N; j+=2*i)
            {
                status[j]=1;
            }
        }
    }
    long k=1;
    for(long i=3; i<N; i+=2)
    {
        if(status[i]==0)
        {
            prime[k]=i;
            k++;
        }
    }
}

long long NOD(long long I)
{
    long long result=1, power;

    for(long i=0; prime[i]*prime[i]<=I; i++)
    {
        if(I%prime[i]==0)
        {
            power=0;
            while(I%prime[i]==0)
            {
                I/=prime[i];
                power++;
            }
            result*=(power+1);
        }
    }
    if(I>1)
    {
        result*=(1+1);
    }

    return result;
}


int main()
{

    INT I, zero=0, caseno=0;
    long t;
    sieve();
    prime[0]=2;

    scanf("%ld", &t);
    while(t--)
    {
        scanf("%lld", &I);
        zero = NOD(I);

        printf("Case %lld: %lld\n", ++caseno, zero-1);
    }
    return 0;
}
