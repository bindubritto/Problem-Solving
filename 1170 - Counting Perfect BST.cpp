#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 6;
int catalan[MAX];

int n = 100;

void init() {
    catalan[0] = catalan[1] = 1;
    for (int i=2; i<=n; i++) {
        catalan[i] = 0;
        for (int j=0; j < i; j++) {
            catalan[i] += (catalan[j] * catalan[i-j-1]) % MOD;
            if (catalan[i] >= MOD) {
                catalan[i] -= MOD;
            }
        }
    }
}




int main()
{
    init();
    for(int i=0;i<n;i++){
        printf("%d %d\n", i, catalan[i]);
    }

    return 0;
}





