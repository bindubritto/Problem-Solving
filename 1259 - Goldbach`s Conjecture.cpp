#include<stdio.h>
#include<math.h>

static bool status[10000005];
int prime[664585],N=10000005;

void sieve()
{
    int i, j, k;

    int sqrtN = int(sqrt((double)N));

    for(i=4; i<=N; i+=2)
    {
        status[i]=1;
    }

    for(i=3; i<=sqrtN; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=N; j+=i+i)
            {
                status[j]=1;
            }
        }
    }
    for(int i=3,k=1; i<=N; i+=2)
    {
        if(status[i]==0)
        {
            prime[k]=i;
            k++;
        }
    }
}



int main()
{

    freopen("in.txt", "r", stdin);
    int n,t, caseno=0,i, count, a, b;
    sieve();
    prime[0]=2;

    scanf("%d", &t);
    while(t--)
    {

        scanf("%d", &n);

        count=0;
        for(i=0; prime[i]<=n/2; i++)
        {
            a = prime[i];
            b = n - prime[i];

            if(status[b]==0 && (a+b)==n)
            {
                count++;
            }
        }

        printf("Case %d: %d\n", ++caseno, count);
    }

    return 0;
}
