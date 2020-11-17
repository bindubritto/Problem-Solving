#include<stdio.h>
#include<set>
#include<algorithm>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    set<int>nose;
    int caseno=0, times, told, n;
    cin>>n;
    while(n--){
        cin>>times;
        int res=2, ans=0;
        for(int i=0;i<times;i++){
            cin>>told;
            nose.insert(told);
        }
        int arr[52], i=0;
        for(set<int>::iterator it=nose.begin();it!=nose.end();it++){
            arr[i]= *it;
            i++;
        }
        int siz= nose.size();
        res = arr[0]-2;
        ans = (int)ceil(res/5.0);
        for(int i=0;i<siz-1;i++){
            res = (arr[i+1]-arr[i]);
            ans+=(int)ceil(res/5.0);
        }
        printf("Case %d: %d\n",++caseno, ans);
        nose.clear();
    }
    return 0;
}
