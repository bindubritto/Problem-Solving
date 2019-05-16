#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

#define maxx 100000
#define INT long long
INT INF=1e10;
int arr[100005];
int tree[3*100005];

void create(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int mid= (b+e)/2;
    int left = 2*node;
    int right = left+1;

    create(left, b, mid);
    create(right, mid+1, e);

    tree[node] = min(tree[right], tree[left]);

}

int query(int node, int b, int e, int i, int j)
{
    if(j<b || i>e)return INF;
    if(i<=b && e<=j)return tree[node];
    int mid = (b+e)/2;
    int left = 2*node;
    int right = left + 1;

    int p = query(left, b, mid, i, j);
    int q = query(right, mid+1, e, i, j);

    return min(p, q);
}

void update(int node, int b, int e, int pos, int value)
{
    if(pos<b || pos>e)return;
    if(b==e)
    {
        tree[node]=value;
        return;
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = left+1;

    update(left, b, mid, pos, value);
    update(right, mid+1, e, pos, value);

    tree[node] = min(tree[left], tree[right]);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, t, q, i, j, caseno=0;

    scanf("%d", &t);

    while(t--)
   {
        scanf("%d %d", &n, &q);
        printf("Case %d:\n", ++caseno);
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &arr[i]);
        }
        create(1, 1, n);
        for(int k=0;k<q;k++){
            scanf("%d %d", &i, &j);
            int res = query(1, 1, n, i, j);
            printf("%d\n", res);
        }
    }

    return 0;
}

