#include<stdio.h>
#include<math.h>
#include<vector>

using namespace std;

vector<int>factor;
vector<int>power;

int prime[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

void factorize(int n)
{
    int index, divide, m;
    //int sqrtn = int(sqrt((double)n));
    for(int k=0; prime[k]<=n; k++)
    {
        //printf(" k =%d\n", k);
        //printf("prime = %d\n", prime[k]);
        //if(divide==0)break;
        m = prime[k];
        factor.push_back(m);
        divide=n;
        index=0;
        for(int i=1 ; divide!=0; i=i*m)
        {
            divide =n/(prime[k]*i);
            //printf("div = %d\n", divide);
            index+=divide;
        }
        //printf("index = %d\n", index);
        power.push_back(index);
        //printf("hello\n");
        if(k==24)break;

    }
}

int main()
{

    int len, n, t, caseno=0,last_index=0;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%d", &n);
        factorize(n);

        len = factor.size();

        printf("Case %d: %d =", ++caseno, n);

        last_index = 0;
        for(int j =0; j<len-1; j++)
        {
            last_index++;
            printf(" %d (%d) *", factor[j], power[j]);

        }
        printf(" %d (%d)\n", factor[last_index], power[last_index]);

        factor.clear();
        power.clear();
    }

    return 0;
}
