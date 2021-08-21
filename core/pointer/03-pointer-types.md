# Pointer Types

Pointers are strongly typed. But why? Why not some generic type?

Ahh yes, there are some reason too. Because, we do not use pointer only to store memory address, but also dereference the memory address. What is that mean?

Suppose, we have an integer variable a = 1025, and we assign address of a to a pointer variable p.

```cpp
int a = 1025;
int *p;
p = &a;

printf("%d\n", p); // 200, which is starting address.
printf("%d\n", *p); // 1025
```

Here we have a pointer variable which contain the first byte address of four consecutive bytes. So, when we dereference, we need to look at the first byte adress first & then we need to decide how many bytes I will look for? So, data type will be the answer of this question. So, *p means

```cpp
printf("%d", *p); // Look at 4 bytes starting address 200
```

But if we casting it's type to character, then the address will be same but when we try to derefence, we'll have the access to only first byte. If we try to increment by one, then we will see 4 as answer. Cause, second byte have only 3rd bit on. But when p was an integer type, it would capture all the 4 bytes and computer then convert that binary to human friendly number. That's it. This image saying more than that.

![Pointer-04](../../images/ptr4.png?raw=true "Pointer Types")

Below image will clear the concept

![Pointer-05](../../images/ptr5.png?raw=true "Pointer Dereferencing")
