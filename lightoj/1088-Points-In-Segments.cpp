#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //ios_base::sync_with_stdio(0); // can`t present any printf/scanf

    ll caseno=0, t, arr[100005], n, q;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &n, &q);
        for(ll i=0; i<n; i++)
        {
            scanf("%lld", &arr[i]);
        }

        ll right, left;
        printf("Case %lld:\n", ++caseno);
        for(ll i=0; i<q; i++)
        {
            scanf("%lld %lld", &left, &right);

            left = lower_bound(arr, arr+n, left) - arr;
            right = upper_bound(arr, arr+n, right) - arr;

            printf("%lld\n",right-left);
        }
    }

    return(0);
}

