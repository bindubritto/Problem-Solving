#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll distance[1001];
ll high=0, low=0;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll N, K, t, caseno=0;
    scanf("%lld", &t);
    scanf("%lld %lld", &N, &K);
    for(ll i=0;i<N+1;i++){
        scanf("%lld", &distance[i]);
        high = high + distance[i];
        low = max(low, distance[i]);
    }




    return(0);
}

