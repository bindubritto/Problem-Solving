# Pointers and Arrays

```cpp
int A[5];
int *p;

p = &A[0]; // it gives us the base address of an array;
p = A;     // This is same like previous syntax;

```

So, element at index i, will be

- Address: &A[i] or (A + i)
- Value: A[i] or *(A + i)

This image saying more

![Pointer-09](../../images/ptr9.png?raw=true "Array with pointer")

With a running program

![Pointer-10](../../images/ptr10.png?raw=true "Array with pointer")
