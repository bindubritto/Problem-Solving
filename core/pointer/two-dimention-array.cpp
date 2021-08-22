#include<bits/stdc++.h>
using namespace std;

int main()
{
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}};


    printf("B = %d\n", B);
    printf("&B[0] %d\n", &B[0]);
    printf("\n");

    printf("*B = %d\n", *B);
    printf("B[0] = %d\n", B[0]);
    printf("&B[0][0] = %d\n", &B[0][0]);
    printf("\n");

    printf("B[0][0] = %d\n", B[0][0]);

    return 0;
}
