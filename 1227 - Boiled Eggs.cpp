#include<stdio.h>

int main()
{
    //freopen("in.txt", "r", stdin);

    int egg[31], n, p, q, i, sum, caseno=0, t, res, count;

    scanf("%d", &t);

    while(t--){

    scanf("%d %d %d", &n, &p, &q);
    for(i=0;i<n;i++){
        scanf("%d", &egg[i]);
    }
    sum=0;
    count=0;
    for(i=0;i<n;i++){
        sum+=egg[i];
        if(i+1>p || sum>q)break;
        count++;
    }

    printf("Case %d: %d\n", ++caseno, count);

    }

    return 0;
}
