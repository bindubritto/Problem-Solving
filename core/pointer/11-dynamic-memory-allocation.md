# Dynamic memory allocation in C

We'll look into some library function for dynamic memory allocation

- malloc
- calloc
- realloc
- free

## malloc()

Returns a void pointer for generic type, receive number of bytes as need. malloc doesn't initialize it's memory, so we'll find garbage.

```c
malloc(); // void* malloc(size_t size); size_t means positive interger (unsigned) only

int *p = (int*)malloc(no_of_elements*sizeof(int));

// Same 
*p = 3;       // p[0] = 3;
*(p + 1) = 4; // p[1] = 4;
*(p + 2) = 5; // p[2] = 5;

```

## calloc()

Returns a void pointer for generic type, receive 2 arguments. One is no. of elements we need and another is size of data-type in bytes. Also, calloc initialize the memory with 0.

```cpp
calloc(); // void* calloc(size_t num, size_t size)

int *p = (int*)calloc(no_of_elements, sizeof(int));

```

## realloc()

If I have a block of memory which I need to change the size, then I'll use realloc().

```cpp
realloc(); // void* realloc(void* ptr, size_t size)
// void* realloc(who will extend, how much will extend)

int *A = (int*)malloc(no_of_elements*sizeof(int));

int *B = (int*)realloc(A, 10*sizeof(int));
```

If new size is greater than previous and if it is extendable to further then it will extend otherwise, fresh new memory block will allocated and previous memory block will deallocated from memory.

But if we try to reduce the new size then reduced memory will be free and assign garbage value.

Realloc can be used in different purpose also.

```cpp
int *A = (int*)realloc(NULL, n*sizeof(int)); // Equivalent to malloc

int *A = (int*)realloc(A, 0); // Equivalent to free(A)
```

## free()

If we want to free or release our allocated memory we need to use free.

```cpp
int *p = (int*)malloc(no_of_elements*sizeof(int));

free(p);
p = NULL;
```
