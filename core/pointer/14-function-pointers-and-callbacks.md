# Function Pointers and Callbacks

- Function pointers can be passed as arguments to functions. So, which function receive function pointer as it's argument can call back the function the pointer will point to.

- So, callback thing is comming from this concept.

```cpp
#include<stdio.h>

void A() // callback function
{
    printf("Hello World");
}

void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // call-back the function that "ptr" points to
}

int main()
{
    void (*p)() = A;
    B(p);

    // Same as previous
    B(A); // Name of a function returns the address
}
```

This is a simple design. Now, we're designing something better than this. We'll design simple bubble sort funtion. Here is the implementation

```cpp
#include<stdio.h>

void BubbleSort(int A[], int sizee)
{
    int i, j, temp;
    for(i = 0; i < sizee; i++){
        for(j = 0; j < sizee - 1; j++){
            if(A[j] > A[j+1]){ // compare A[j] with A[j+1] and SWAP if needed.
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

    BubbleSort(A, 6);
    for(int i = 0; i<6; i++)printf("%d ", A[i]);

    return 0;
}
```

So, this is cool. Inside of nested for loop we're comparing and pushed the higher number towards right side of the array. So that it can a accending sort so far. But what if, we need descending sort? Will we change the greater than sign? or we will write a complete new function? or what if we want accending disregards of sign? In that case, it is better to pass a function pointer in that compare logic. So, comparison logic will be outside of core bubble sort function. Here is the code.

```cpp
#include<stdio.h>

int compare(int a, int b)
{
    if(a > b) return 1;
    else return -1;
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

    BubbleSort(A, 6, comapre);
    for(int i = 0; i<6; i++)printf("%d ", A[i]);

    return 0;
}
```

Here, we need a callback function which should compare two integers, should return 1 if the first element has higher rank, 0 if the elements are equal and -1 if the second element has higher rank.

So, now we can change in the compare function and rest will do by it. We don't need to change in the core of bubble sort function.

Another library function for quick sort is qsort();

Here is the code, we need to pass 4 things for quick sort in action. One is the function pointer on which basis we need to do sorting. This is cool.

```cpp
#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{

    int A = *((int*)a); // typecasting to int* then getting value
    int B = *((int*)b);

    return A - B; // increasing or decresing decision will make here.
}

int main()
{
    int A[] = {3, 4, 2, 6, 5, 1};

    qsort(A, 6, sizeof(int), compare);
    for(int i = 0; i<6; i++)printf("%d ", A[i]);

    return 0;
}
```

This is sooo cool. So, now I understand, when we call sort in C++ with external compare function, this happens there. Another important use case of callback function is event handling. Which is very much useful and almost always used in JavaScript
