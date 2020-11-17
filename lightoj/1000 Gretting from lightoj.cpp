#include<stdio.h>

int main()
{

    int a, b, t, caseno=0;
    scanf("%d", &t);
    for(int i = 0;i<t;i++){
        scanf("%d %d", &a, &b);
        printf("Case %d: %d", ++caseno, a+b);
    }
    return 0;
}
