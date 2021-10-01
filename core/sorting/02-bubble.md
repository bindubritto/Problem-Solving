# Bubble Sort

The main idea is, we take 2 pointer or we pick 2 numbers from array and compare them. If second number is lower than first number, then they will swap their position. And we will do that with entire array. And this means one pass. Interesting thing is, in every pass, the highest element will bubbled up to right side. That's why it is called bubble sort.

```py
[2, 7, 4, 1, 5, 3]
```

After one pass, array will look like

```py
[2, 4, 1, 5, 3, 7]
```

After second pass, array will look like this

```py
[2, 1, 4, 3, 5, 7]
```

So, at each pass, this array will divide into 2 parts, right part is sorted and left part is unsorted.
And we're sure that, after (n-1) pass, our array will be sorted.

## Initial code

```cpp
#include<stdio.h>

void bubbleSort(int A[], int length)
{
    for(int k = 1; k <= length - 1; k++)
    {
        for(int i = 0; i <= length - 2; i++)
        {
            if(A[i] > A[i+1])
            {
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }

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
```

## Image 1

We can improve this code by twiking in inner loop. We don't need to go always (n-2) times for every pass, as at every pass, right side will be in sorted state.

```sh
(n-2) will be (n-k-1)
```

But complexity is still O(n^2). Here, we can use flag, if no swap happen, then flag will remain same. We'll break outer loop. Because the array is already sorted.

Then we've time complexity O(n), and this is the best case scenario.

## Improved code

```cpp
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
```

### Time Complexity

- Best Case - O(n)
- Average Case - O(n^2)
- Worst Case - O(n^2)

### Space Complexity

- Space complexity - O(1)
