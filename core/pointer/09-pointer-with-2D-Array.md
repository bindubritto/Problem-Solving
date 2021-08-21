# Pointer with multi-dimentional arrays

But how one dimentional array works in the first place?

This image will say a lot about that

![Pointer-14](../../images/ptr14.png?raw=true "One Dimentional Array")

Now, we will see how 2D array organized in memory.

```cpp
int B[2][3]; // Creating 2 1-D array which consists 3 integers each.

int *p; 

p = B; // Invalid. Cause B will not return to a single integer address. It will return the first address of 1-D arrays of 3 elements. So, our pointer should prepare for it.

int *p[3] = B; // Right declaration;

// B & &B[0] is same. They will return 400
printf("%d\n", B);
printf("%d\n", &B[0]);

// These are same, They will return 400
printf("%d\n", *B);
printf("%d\n", B[0]);
printf("%d\n", &B[0][0]);
```

This image will explain a lot

![Pointer-15](../../images/ptr15.png?raw=true "Two Dimentional Array")

So, for a 2-D array, we need to understand that,

```cpp
B[i][j];
*(B[i] + j);
*(*(B + i) + j)
// All are same
```

- These upper 3 lines are so so important.

## Part - 2

```cpp
int B[2][3];
int *p[3] = B; // Right declaration;

printf("%d\n", B); // Here B returns a pointer to an array of 3 integers
printf("%d\n", *B); // Here *B returns a pointer to an integer

// When we're just printing the address both looks like same. But the type will required when we try to derefencing the variable or try to do pointer arithmetic.
```

## 3-Dimentional Array

```cpp
int C[3][2][2];
int (*p)[2][2] = C;
```

```cpp
// These are same
void FuncA(int A[]);
void FuncA(int *A);


void FuncB(int B[][3]);
void FuncB(int (*B)[3]);

void FuncC(int C[][3][2]);
void FuncB(int (*C)[3][2]);

int main()
{
    A[2] = {2, 3};
    B[2][3] = {{1, 2, 3}, {4, 5, 6}};
    C[3][3][2] = {
        {{1, 2}, {4, 5}, {7, 8}},
        {{1, 2}, {4, 5}, {7, 8}},
        {{1, 2}, {4, 5}, {7, 8}},
    };

    FuncA(A);
    FuncA(&A[0]);

    FuncB(B);
    FuncB(&B[0]);
    FuncB(&B[0][0]);

    FuncC(C);
}

```

So, moral of the story is, we need to specify the dimention for all but the first one. Without first dimention, rest of the dimention should match.
