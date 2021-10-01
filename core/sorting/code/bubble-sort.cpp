#include<stdio.h>

void bubbleSort(int A[], int length)
{
    for(int k = 1; k <= length - 1; k++)
    {
        int flag = 0;
        for(int i = 0; i <= length - k -1; i++)
        {
            if(A[i] > A[i+1])
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)break;

    }
}

int main()
{
    int A[] = {2, 7, 4, 1, 5, 3};

    bubbleSort(A, 6);
    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
