#include<stdio.h>

int compare(int a, int b)
{
    if(a > b) return -1;
    else return 1;
}

void BubbleSort(int A[], int sizee, int (*compare)(int, int))
{
    int i, j, temp;
    for(i = 0; i < sizee; i++){
        for(j = 0; j < sizee - 1; j++){
            if( compare(A[j], A[j+1]) > 0 ){ // compare A[j] with A[j+1] and SWAP if needed.
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {3, 4, 2, 6, 5, 1};

    BubbleSort(A, 6, compare);
    for(int i = 0; i<6; i++)printf("%d ", A[i]);

    return 0;
}
