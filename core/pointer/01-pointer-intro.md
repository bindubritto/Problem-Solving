# Introduction to pointer

In out typical computer arch, smallest addressable memory unit is byte. And one byte consist of 8 bits. So, every single byte have it's own address in computer memory.

P.S: When we say memory in terms of running a program or program execution, we mostly refer RAM.

In typical architechture,

- integer type variable need 4 bytes of memory

- float type variable need 4 bytes of memory

- character type variable need 1 bytes of memory

And in computer there is a lookup table, where we map variable name to it's type and starting address.

Below image is saying more than this writing things

![Pointer-01](../../images/ptr1.png?raw=true "Memory architechture")

Okay Cool. But can we know the address of any variable in memory or can we work with this address?

Yes. We can in C/C++ program. Pointer is the concept of doing so.

## Pointer

Pointer is a special type of variable which store address of another variable. That's it.

Syntax

```cpp
int a; // normal variable declare.Let, address of a is 204
int *p; // Pointer varialbe declare. Let, address of p is 64

a = 5; // normal value assign
p = &a; // pointer value assign, & (ampersend return address)

```

```cpp
int *p;
```

We say it as pointer to integer. So, it can point to an integer type variable address.

```cpp
print(a); // 5
print(&a); // 204
print(p); // 204, gives us address
print(&p); // 64
print(*p); // 5, gives us value at address
```

Last line is called dereferencing. Below image is enough, I guess.

![Pointer-02](../../images/ptr2.png?raw=true "Pointer architechture")
