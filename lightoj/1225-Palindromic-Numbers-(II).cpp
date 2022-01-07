#include<stdio.h>
#include<string.h>

int main()
{
    //freopen("in.txt", "r", stdin);

    char str[20], str1[10], str2[10];

    int len, t, caseno=0, res, i, j, k;

    scanf("%d", &t);
    while(t--)
    {

        scanf("%s", str);

        len = strlen(str);

        i = (len/2)-1;
        for(i,k=-1; i!=-1; i--)
        {
            str1[++k]=str[i];
        }
        str1[++k] = '\0';

        //puts(str1);

        if(len%2==0)
            j = (len/2);
        else
            j = (len/2)+1;

        for(j,k=-1; str[j]!='\0'; j++)
        {
            str2[++k] = str[j];
        }
        str2[++k] = '\0';

        //puts(str2);

        res = strcmp(str1,str2);

        if(res==0)
            printf("Case %d: Yes\n", ++caseno);
        else
            printf("Case %d: No\n", ++caseno);

    }

    return 0;
}
