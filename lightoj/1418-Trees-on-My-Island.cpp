#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x[10004], y[10004];

ll gcd(ll a, ll b)
{
    if(!a) return b;
    if(!b) return a;

    return __gcd(a, b);
}

ll PicksTheorem(ll n)
{
    ll A=0, B=0, I, i;
    x[n] = x[0];
    y[n] = y[0];

    for(i=0;i<n;i++){
        A += (x[i]*y[i+1] - x[i+1]*y[i]);
        B += gcd(abs(x[i] - x[i+1]), abs(y[i] - y[i+1]));
    }

    A = abs(A);

    return I = (A-B+2)/2;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    ll t, n, caseno=0;

    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        for(ll i=0;i<n;i++){
            scanf("%lld %lld", &x[i], &y[i]);
        }
        ll res = PicksTheorem(n);

        printf("Case %lld: %lld\n", ++caseno, res);
    }
    return(0);
}
