#include<stdio.h>
#define INT long long int

INT index, arr[105];

void sum(INT arr[], INT value)
{
    INT i;
    for(i=0; i<index; i++)
    {
        arr[i]= arr[i]+value;
    }
}

void mul(INT arr[], INT value)
{
    INT i;
    for(i=0; i<index; i++)
    {
        arr[i]= arr[i]*value;
    }
}

void div(INT arr[], INT value)
{
    INT i;
    for(i=0; i<index; i++)
    {
        arr[i]= arr[i]/value;
    }
}

void xswap(INT arr[], INT a, INT b)
{
    INT temp;

    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void rev(INT arr[])
{
    INT revarr[105], i, j;
    j=index-1;

    for(i=0; i<index; i++)
    {
        revarr[i]=arr[j];
        j--;
    }

    for(i=0; i<index; i++)
    {
        arr[i]=revarr[i];
    }
}

int main()
{

    //freopen("in.txt", "r", stdin);

    INT operation, i, x, y, t, caseno=0;
    char ch;

    scanf("%lld", &t);

    while(t--)
    {

        scanf("%lld %lld", &index, &operation);

        for(i=0; i<index; i++)
        {
            scanf("%lld", &arr[i]);
        }

        for(i=0; i<operation; i++)
        {
            scanf(" %c", &ch);

            if(ch == 'S' || ch == 'M' || ch == 'D')
            {
                scanf("%lld", &x);
            }
            if(ch == 'P')
            {
                scanf("%lld %lld", &x, &y);
            }

            // input finish

            if(ch=='S')sum(arr, x);
            if(ch=='M')mul(arr, x);
            if(ch=='D')div(arr, x);
            if(ch=='P')xswap(arr, x, y);
            if(ch=='R')rev(arr);

        }

        printf("Case %lld:\n", ++caseno);
        printf("%lld", arr[0]);
        for(i=1; i<index; i++)
        {
            printf(" %lld", arr[i]);
        }
        printf("\n");

    }

    return 0;
}
