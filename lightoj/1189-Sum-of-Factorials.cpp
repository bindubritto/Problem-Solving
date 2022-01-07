#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>v;

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    long long arr[30],caseno=0;
    arr[0]=1;

    for(int i=1; i<20; i++)
    {
        arr[i] = arr[i-1]*i;
    }

    int t;
    scanf("%d", &t);
    while(t--)
    {

        long long n, p=20, temp;
        scanf("%lld", &n);
        temp = n;

        for(int i=19;i>-1;i--){
            if(n<arr[i])continue;
            if(n>=arr[i])
            {
                n = n - arr[i];
                v.push_back(i);
            }
        }
        long long res = 0;
        for(int i=0;i<v.size();i++){
            //cout<<v[i]<<endl;
            res += arr[v[i]];
        }
        printf("Case %lld: ", ++caseno);
        if(res == temp){
            reverse(v.begin(), v.end());
            for(int i=0;i<v.size();i++){
                printf("%d!", v[i]);
                if(i<v.size()-1)printf("+");
            }
            printf("\n");
        }
        else{
            printf("impossible\n");
        }
        v.clear();
    }

    return 0;
}
