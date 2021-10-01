# Selection Sort (Select minimum)

Suppose, we have a set of numbers in our left hand. What we will is like that, we will pick the lowest number from lef hand and keep it to right hand. Again, we will do that process. We will pick the minimum from left hand and end of this event, right hand will be a sorted array.

To do so, we need to create another empty array (like right hand), then we can select from left array and push it to right array. And we can assign INT_MAX to that picked element to mark. But this idea is not so good. We need to use an auxilary memory to sort. How can we improve this scenario?

## Improvement

The idea is simple, swap. We know that minimum number will stay at 0th index always. So, when we will find a minumum number from array, we will swap it with 0th position. Then start finding next minimum from 1st index to nth index. So, this will like in-place sorting.

## Code Example

```cpp
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
```
