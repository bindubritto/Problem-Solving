#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int *p;

    a = 10;
    p = &a;
    cout << p << endl;
    cout << &a << endl;
    cout << &p << endl;
    cout << *p << endl;

    int b = 20;
    *p = b;

    cout << p + 1 << endl;
    cout << &a << endl;
    cout << &p << endl;
    cout << *p << endl;

    printf("address of pointer p is %d\n", p);
    printf("address of pointer p + 1 is %d\n", p + 1);
    return 0;
}
