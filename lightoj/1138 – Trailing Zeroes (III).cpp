#include<stdio.h>

#define INT long long int

INT fact(INT k)
{
    INT i, zero=0, res=0;

    for(i=5;;i*=5)
    {
        res=(k/i);
        if(res==0)break;
        zero+=res;
    }

    return zero;
}

INT b_search(INT n)
{
    INT high=10000000000, low=0, mid, result=-1;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(fact(mid)>=n)
        {
            if(fact(mid)==n)
            {
                result = mid;
            }
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    INT t, caseno=0, n, res;

    scanf("%lld", &t);

    while(t--){
        scanf("%lld", &n);

        res = b_search(n);

        if(res==-1){
            printf("Case %lld: impossible\n", ++caseno);
        }
        else
            printf("Case %lld: %lld\n", ++caseno, res);
    }

    return 0;
}
