#include<stdio.h>

int SumOfElements(int A[], int sizee)
{
    int sum = 0;
    for(int i = 0; i < sizee; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};

    int sizee = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, sizee);

    printf("Sum of elements %d\n", total);
    printf("Size of array %d\n", sizee);

    return 0;
}
