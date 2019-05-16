#include<stdio.h>
#include<algorithm>

using namespace std;


int main()
{
    long long int arr[2], lhs, rhs;
    int caseno=0, t;

    scanf("%d", &t);

    while(t--)
    {

        scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);

        //if(arr[0]<0)arr[0]=arr[0]*(-1);
        //if(arr[1]<0)arr[1]=arr[1]*(-1);
        //if(arr[2]<0)arr[2]=arr[2]*(-1);

        sort(arr, arr+3);

        lhs = (arr[0]*arr[0])+(arr[1]*arr[1]);
        rhs = (arr[2]*arr[2]);

        if(lhs == rhs)
            printf("Case %d: yes\n", ++caseno);
        else
            printf("Case %d: no\n", ++caseno);

    }

    return 0;
}
