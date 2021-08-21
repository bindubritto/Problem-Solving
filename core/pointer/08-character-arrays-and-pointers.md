# Pointers with character array

One important thing we should always remember that,

- A string in C has to be null terminated.

Here, string is nothing more than character array. So, size of the array is always greater or equal to the no of characters in strings + 1. Now we will see some initialization method of character array.

1. First

```cpp
char c[5];

c[0] = 'J';
c[1] = 'O';
c[2] = 'H';
c[3] = 'N';
c[4] = '\0';
```

2. Second

```cpp
char c[5] = "JOHN";
char c[4] = "JOHN"; // Invalid because of null charater.
```

This case, we don't need to insert null character explicitly.

3. Second

```cpp
char c[5] = {'J', 'O', 'H', 'N', '\0'}
```

This image says something more

![Pointer-12](../../images/ptr12.png?raw=true "Character Pointer")

## Character Pointer

Arrays and pointers are different types that are used in simillar manner. Now, we'll see the simillarity

```cpp
char c1[6] = "Hello";
char *c2;
c2 = c1; // Valid, because c1 is nothing but &c1[0]
printf("%c\n", c2[1]); // e will print
c2[0] = 'A'; // "Aello" will happen

c2[i]; // *(c2 + i)
c1[i]; // *(c1 + i)
// Both are alternating syntax
```

Dissimillarity will like this

```cpp
char c1[6] = "Hello";
char *c2;
c2 = c1; // Valid, because c1 is nothing but &c1[0]
c1 = c2; // invalid. That doesn't make sense. Cause c1 is array type.

c1 = c1 + 1; // Invalid
c2++; // Valid, going to next address
```

A simple program to print a character array.

![Pointer-13](../../images/ptr13.png?raw=true "Printing Character Array")

```cpp
#include<stdio.h>

void Print(char *C)
{
    while(*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main()
{

    char C[20] = "Hello"; // String gets stored in the space for array
    
    
    char *D = "Aello"; // As string gets stored as compile time constant, so modification is not possible for the next line.
    D[0] = "H";  // Invalid operation



    print(C);

    return 0;
}
```

If we want to forcefully stop the write property for an external function, we need to add "const" keyword before data type of function argument.

```cpp
void Print(const char *C)
```

## Final Words

We should always focus when we try to code using pointer. Cause it may destroy our program, if we can't handle it properly.
