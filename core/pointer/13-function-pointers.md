# Function Pointer

Pointer can

- point to data
- point to functions.

But what would be the address of a function? What are the use cases of it?

Function Pointer: It store the starting address or entry point of the block of program with set of instruction.

## Syntax

```cpp
int Add(int a, int b)
{
    return a+b;
}

int main()
{
    int (*p)(int, int); // declaring function pointer

    // Both are same below but not same like above.
    // int *p(int, int); return type is pointer to integer
    // int* p(int, int);
    
    p = &Add;
    // p = Add; same as above

    // using p, we can call add function

    int c = (*p)(2, 3);
    // int c = p(2, 3); same as above
    
    printf("%d\n", c); // 5
}

```
