# Array as function argument

We already know this concept.

```cpp
int A[5];
int *p;

p = &A[0]; // it gives us the base address of an array;
p = A;     // This is same like previous syntax;

```

Now, we will extend our understanding.

```cpp
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
```

This will work fine, but what if we try to find the size of the array inside the called function? SumOfElement function?

```cpp
#include<stdio.h>

int SumOfElements(int A[])
{
    int sum = 0;
    int sizee = sizeof(A)/sizeof(A[0]);

    for(int i = 0; i < sizee; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};

    int total = SumOfElements(A);

    printf("Sum of elements %d\n", total);

    return 0;
}
```

Then, output will not the same as previous. Because, when compiler looks that, we try to pass a whole array, it doesn't do that. Instead, it pass the reference or address of the first element of an array. This need to remember. So, if we remember from out previous class, we can re-write this code like this

```cpp
#include<stdio.h>

int SumOfElements(int *A) // int A[] is same as int *A
{
    int sum = 0;
    int sizee = sizeof(A)/sizeof(A[0]);

    for(int i = 0; i < sizee; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};

    int total = SumOfElements(&A[0]); // A & &A[0] both are same

    printf("Sum of elements %d\n", total);

    return 0;
}
```

So, called function actually passed the reference the first address of an array. Because, array is heave in size, so, it doesn't make any sense to create new array in every function calling. So,

- In C/C++, array always call by reference.

And this line will return always one (1) inside external function.

```cpp
    int sizee = sizeof(A)/sizeof(A[0]);
```

So, we always need to pass the size of an array. This image says something

![Pointer-11](../../images/ptr11.png?raw=true "Array with pointer")
