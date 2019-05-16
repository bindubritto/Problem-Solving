#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

struct node
{
    int num, div;
};


bool comp(struct node a, struct node b)
{
    if(a.div<b.div)
        return 1;
    if(a.div == b.div)
        return a.num>b.num;
    return 0;
}

int nod(int N)
{

    int result=1, power;
    int sqrtn= int(sqrt((double)N));

    int prime[]= {2,3,5,7,11,13,17,19,23,29,31,37};

    for(int i=0; prime[i]<=sqrtn; i++)
    {
        if(N%prime[i]==0)
        {
            power=0;
            while(N%prime[i]==0)
            {
                N/=prime[i];
                power++;
            }
            result*=(power+1);
        }
    }
    if(N>1)
    {
        result*=(1+1);
    }

    return result;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    struct node point[1001];

    for(int i=1; i<=1000; i++)
    {
        point[i].num = i;
        point[i].div = nod(i);

    }

    sort(point, point+1001, comp);



    int t, caseno=0, k;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &k);
        printf("Case %d: %d\n", ++caseno, point[k].num);
    }

    return 0;
}
