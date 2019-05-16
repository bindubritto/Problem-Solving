#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    long long int caseno=0, n, marbel;
    string s;
    char str[6];
    scanf("%lld", &n);
    while(n--){
        scanf("%lld", &marbel);
        scanf("%s", str);
        printf("Case %d: ", ++caseno);
        if(str[0] == 'B'){
            if(marbel%3==0){
                printf("Alice\n");
            }
            else{
                printf("Bob\n");
            }
        }
        else if(str[0] == 'A'){
            if(marbel%3==1){
                printf("Bob\n");
            }
            else{
                printf("Alice\n");
            }
        }
    }
    return 0;
}
