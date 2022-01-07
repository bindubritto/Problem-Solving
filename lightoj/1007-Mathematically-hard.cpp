#include<stdio.h>
#include<math.h>
#define INT long long int

static bool status[5000005];

INT N=5000005, phi[5000005];

unsigned long long ans, res=0;

void sievephi()
{
    for(int i=1; i<=N; i++)phi[i]=i;

    phi[1]=0;
    status[1]=1;

    for(int i=2; i<=N; i++)
    {
        if(status[i]==0)
        {
            for(int j=i; j<=N; j+=i)
            {
                phi[j]=phi[j]*(i-1)/i;
                status[j]=1;
            }
        }
    }
    res = 0;
    for(int i=2; i<=N; i++)
    {
        res+=(phi[i]*phi[i]);
        phi[i]=res;
    }

}

int main()
{
    sievephi();

    int a,b,caseno=0,t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d",&a, &b);
        ans = phi[b]-phi[a-1];
        printf("Case %d: %llu\n",++caseno, ans);

    }
    return 0;
}
