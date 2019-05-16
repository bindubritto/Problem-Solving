#include<stdio.h>

int main()
{
    int t, caseno=0, unit[1005], stu, sum;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%d", &stu);
        sum = 0;
        for(int i=0; i<stu; i++)
        {
            scanf("%d", &unit[i]);
            if(unit[i]<0){
                unit[i] = unit[i]*(0);
            }
            sum+=unit[i];
        }
        printf("Case %d: %d\n", ++caseno, sum);
    }

    return 0;
}
