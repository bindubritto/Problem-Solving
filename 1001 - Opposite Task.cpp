#include<stdio.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, m, t;

    scanf("%d", &t);

    while(t--){

    scanf("%d", &n);

    m = n/2;
    n = n-m;

    printf("%d %d\n", n, m);

    }

    return 0;
}
