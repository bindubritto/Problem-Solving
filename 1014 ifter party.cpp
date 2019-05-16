#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{

    long long P, L, Q, i,num[10000], k;
    int T=0,caseno=0;
    scanf("%d", &T);

    while(T--)
    {

        scanf("%lld", &P);
        scanf("%lld", &L);
        printf("Case %d:",++caseno);

        Q = P-L;

        int sqrtQ = int(sqrt((double)Q));
        k=-1;

        if(Q>L)
        {
            for(i=1; i<=sqrtQ; i++)
            {
                if(Q%i==0)
                {
                    if(i>L) num[++k]=i;
                    if(Q/i>L && i!=Q/i) num[++k]=Q/i;
                }
            }
            k++;
            sort(num,num+k);

            for(i=0;i<k;i++)
                printf(" %lld",num[i]);
            printf("\n");

        }
        else
            printf(" impossible\n");
    }

    return 0;
}
