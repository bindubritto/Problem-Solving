#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;
#define INT long long
int main()
{
    string a, b;
    INT day, year;
    char month[20], c;
    scanf("%s %lld %c %lld", month, &day, &c, &year);
    printf("%s %lld  %c %lld\n", month, day, c, year);
    //cin>>a>>n>>b>>m;
    //cout<<a<<n<<b<<m<<endl;
    /*scanf("%lld", &n);

    if(n%4==0){
        if(n%100==0 && n%400==0){
            printf("Leap\n");
        }
        else{
            printf("Not leap\n");
        }
    }
    else{
        printf("Not Leap\n");
    }

    printf("Hello World\n");
    cout<<"Hello World"<<"\n";-**/
    return 0;
}
