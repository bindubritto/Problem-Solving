# Pointers and dynamic memory

## Application's memory

When we execute a program, there are 4 types of memory assignment or memory will work typically like this. We have code(text), Static/Global, Stack, Heap

- Code(Text): Will consume only code or text things.
- Static: Will consume only static or global things.
- Stack: Fixed in size and allocate size when a new function call.
- Heap: Dynamic in size. Dynamically assign or release.

This image says a lot about it.

![Pointer-16](../../images/ptr16.png?raw=true "Memory Management")

Stack: At any given time, top of the stack frame will run, other's are waiting for the result of top stack. When top stack return or finish it's job, it will remove from stack frame & so on & so forth. So, if we write a bad recursion, chances are stack will overflow by function calling. And stack is an implementation of stack data structure.

Heap: Here Heap is not the heap data structure. Here heap is kind of large pull of free memory. We can use it in program running time, allocate it, deallocate it. So, we need to handle it carefully. But stack memory will fixed in compile time. That's why, we need to know the array size before run the program.

- In C, we will use

```C
// These are functions
malloc(); // returns void pointer
calloc();
realloc();
free();
```

- In C++, we will use

```cpp
// These are operators, type safe
new
delete
```

When we allocate some memory from heap, it's out duty to free those memory when we done with those. If we do not do that, then it's bad programming. Next time, we can't consume memory, malloc will return null pointer.

This image saying to do so.

![Pointer-17](../../images/ptr17.png?raw=true "Memory Management using C")

If we want to write the same code using C++, we will do like this

![Pointer-18](../../images/ptr18.png?raw=true "Memory Management using C++")
