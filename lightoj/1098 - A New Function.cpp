#include<stdio.h>
#define INT long long
INT caseno=0;
void solve(INT n)
{
    INT k, i, ans=0;
    for(i=2;i*i<=n;++i){
        k=n/i;
        ans+=(k+i)*(k-i+1)/2;
        ans+=i*(k-i);
    }
    printf("Case %lld: %lld\n", ++caseno, ans);

}

int main()
{
    //freopen("in.txt", "r", stdin);
    INT t, n;

    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        solve(n);
    }

    return 0;
}
