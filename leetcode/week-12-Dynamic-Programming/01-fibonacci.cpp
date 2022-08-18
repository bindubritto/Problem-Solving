#include<iostream>
#include<vector>
using namespace std;
vector<int>cache(1000, -1);

int getFib(int n)
{
    if(n < 2) return n;
    if(cache[n] != -1) return cache[n];
    cache[n] = getFib(n - 2) + getFib(n - 1);
    return cache[n];
}

int main()
{
    cout<<getFib(4)<<endl;
    return 0;
}