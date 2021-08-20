# Working With Pointer

```cpp
int a; // integer
int *p; // pointer to integer

char b; // character
char *q; // pointer to character

double c; // double
double *r; // pointer to double

p = &a; // assign address of "a" to an integer pointer p.
```

## Pointer Arithmetic

Suppose we have a pointer variale, which points to an integer variable. So, if we increment that pointer variable by 1, then not only 1 will increment but increment depends on the size of the pointed variable type.

```cpp
int a;
int *p = &a;

printf("%d\n", p); // 2002
printf("%d\n", p+1) // 2006
```

As p is an interger type pointer and integer take four bytes, so p+1 gives us four step further. That's it. Below image can say just it.

![Pointer-03](../../images/ptr3.png?raw=true "Pointer Arithmetic")
