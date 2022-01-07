#include<stdio.h>
#include<string.h>

int main()
{
    int sum, t, N, caseno=0,a, b, i, len, taka, flag=0;
    char str[30], str1[30];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &N);
        getchar();
        taka=0;
        flag=1;

        while(N--)
        {
            sum=0;
            len=0;

            scanf("%[^\n]", str);
            getchar();

            len = strlen(str);


            if(len>6)
            {

                for(i=7; str[i]!='\0'; i++)
                {
                    sum = sum*10 + str[i]-48;
                }
                taka+=sum;

            }
            if(len==6)
            {
                if(flag==1)
                {
                    printf("Case %d:\n", ++caseno);
                    flag=0;
                }
                printf("%d\n", taka);
            }

        }
    }

    return 0;
}
