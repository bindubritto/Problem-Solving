#include<stdio.h>
#include<math.h>

int bintoint(char str[])
{
    int num=0, power=7, j;

    for(j=0; str[j]!='\0'; j++)
    {
        num=num+((str[j]-48)*pow(2.0, power));
        power--;
    }
    return num;
}

int main()
{

    //freopen("in.txt", "r", stdin);

    int i, a, b, c, d, num, k, j, A, B, C, D, caseno=0, t;
    char str1[20];
    char str2[40], stra[10], strb[10], strc[10], strd[10];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", str1);
        scanf("%s", str2);

        a=0;
        for(i=0; str1[i]!='.'; i++)
        {
            a=a*10+(str1[i]-48);
        }
        i++;

        b=0;
        for(i; str1[i]!='.'; i++)
        {
            b=b*10+(str1[i]-48);
        }
        i++;

        c=0;
        for(i; str1[i]!='.'; i++)
        {
            c=c*10+(str1[i]-48);
        }
        i++;

        d=0;
        for(i; str1[i]!='\0'; i++)
        {
            d=d*10+(str1[i]-48);
        }

        k=-1;
        for(j=0; str2[j]!='.'; j++)
        {
            stra[++k]=str2[j];
        }
        stra[++k]='\0';
        j++;

        A=bintoint(stra);

        k=-1;
        for(j; str2[j]!='.'; j++)
        {
            strb[++k]=str2[j];
        }
        strb[++k]='\0';
        j++;

        B=bintoint(strb);

        k=-1;
        for(j; str2[j]!='.'; j++)
        {
            strc[++k]=str2[j];
        }
        strc[++k]='\0';
        j++;

        C=bintoint(strc);

        k=-1;
        for(j; str2[j]!='\0'; j++)
        {
            strd[++k]=str2[j];
        }
        strd[++k]='\0';

        D=bintoint(strd);

        if(a==A && b==B && c==C && d==D)
            printf("Case %d: Yes\n", ++caseno);
        else
            printf("Case %d: No\n", ++caseno);

    }

    return 0;
}
