#include<stdio.h>
#include<math.h>

double digit[1000005];

void factorialDigit()
{
    int res=0;
    double x=0;
    for(int i=1;i<=1000002;i++){
        x += log10(i);
        digit[i]=x;
    }
}

int main()
{
    digit[0]=0.0;
    factorialDigit();

    double res;
    int fact, base, t, caseno=0, ans;

    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &fact, &base);
        res = digit[fact]/(log10(base));
        ans = floor(res)+1;
        printf("Case %d: %d\n", ++caseno, ans);
    }

    return 0;
}
