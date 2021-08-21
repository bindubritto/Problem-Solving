# Pointer as function arguments - Call by reference

- Actual Variable: The varible stays from where the function is calling.
- Formal Varible: The varible stays where the new function is called.

```cpp
void Increment(int x)
{
    x = x + 1
}

int main()
{
    int a;
    a = 10;
    Increment(a);
    printf("%d\n", a);
}
```

Here, a is an actual varible and x in a formal variable.

## Application's memory

When we execute a program, there are 4 types of memory assignment or memory will work typically like this. We have code(text), Static/Global, Stack, Heap

- Code(Text): Will consume only code or text things.
- Static: Will consume only static or global things.
- Stack: Fixed in size and allocate size when a new function call.
- Heap: Dynamic in size. Dynamically assign or release.

## Call by value

When we try to call a function by passing only value, it will create a new varible which is local to it's stack frame. And changing to this varible will not affect to main variable.

This image will say more.

![Pointer-07](../../images/ptr7.png?raw=true "Call by value")

## Call by reference

When we try to call a function by passing variable reference, it will also create a pointer variable which is local to it's stack frame. But as it is a pointer, it can affect the value of main variable by dereferencing it.

This image will say more.

![Pointer-08](../../images/ptr8.png?raw=true "Call by reference")

## Use cases

By creating reference, we can save a lot of memory. Because, we don't always need brand new variable to work. Sometimes, it is fine to work with main variable. We will see more in upcoming lessons.
