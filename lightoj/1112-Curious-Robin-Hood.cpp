#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int arr[100005];
int tree[3*100005];

void create(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int mid = (b+e)/2;
    int left = 2*node;
    int right = left+1;

    create(left, b, mid);
    create(right, mid+1, e);

    tree[node]= tree[left] + tree[right];
}

int query(int node, int b, int e, int i, int j)
{
    if(j<b || i>e)return 0;
    if(i<=b && e<=j)return tree[node];
    int mid = (b+e)/2;
    int left = 2*node;
    int right = left + 1;

    int p = query(left, b, mid, i, j);
    int q = query(right, mid+1, e, i, j);

    return p+q;
}

void update(int node, int b, int e, int pos, int value)
{
    if(pos<b || pos>e)return;
    if(b==e)
    {
        if(value>0)
        {
            tree[node]+=value;
            return;
        }
        else
        {
            tree[node]=value;
            return;
        }
    }

    int mid = (b+e)/2;
    int left = 2*node;
    int right = left+1;

    update(left, b, mid, pos, value);
    update(right, mid+1, e, pos, value);

    tree[node] = (tree[left]+tree[right]);
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int t, caseno=0;
    scanf("%d", &t);
    while(t--)
    {
        int n, q;
        scanf("%d %d", &n, &q);

        for(int i=1; i<=n; i++)
        {
            scanf("%d", &arr[i]);
        }

        create(1, 1, n);
        printf("Case %d:\n", ++caseno);
        for(int i=0; i<q; i++)
        {
            int a;
            scanf("%d", &a);
            if(a==1)
            {
                int give;
                scanf("%d", &give);
                int res = query(1, 1, n, give+1, give+1);
                printf("%d\n", res);
                update(1, 1, n, give+1, 0);
            }
            else if(a==2) // add new value
            {
                int i, v;
                scanf("%d %d", &i, &v);
                update(1, 1, n, i+1, v);
            }
            else if (a==3)
            {
                int i, j;
                scanf("%d %d", &i, &j);
                int res = query(1, 1, n, i+1, j+1);
                printf("%d\n", res);
            }
        }
    }
    return 0;
}
