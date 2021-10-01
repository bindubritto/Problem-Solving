#include<stdio.h>

void selectionSort(int A[], int length)
{
    int i, imin, j;
    for(i=0;i<=length-2;i++){
        imin = i;
        for(j=i+1;j<=length-1;j++){
            if(A[j]<A[imin]){
                imin = j;
            }
        }
        int temp = A[i];
        A[i] = A[imin];
        A[imin] = temp;
    }
}

int main()
{
    int A[] = {2, 7, 4, 1, 5, 3};

    selectionSort(A, 6);
    int i;
    for(i=0;i<6;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
