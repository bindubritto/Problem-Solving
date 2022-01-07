#include<stdio.h>
#include<math.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    double add, mul, weight, length, x1, x2, f1x, f2x;
    int caseno=0, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %lf", &length, &weight);
        add = length + weight;
        mul = length*weight;
        //b^2 - 4ac
        double temp = (16*add*add) - (4*12*mul);
        temp = sqrt(temp);

        x1 = (4*add + temp)/(24.0);
        x2 = (4*add - temp)/(24.0);
        //printf("x1 %lf x2 %lf\n", x1, x2);
        f2x= (24*x1) - 4*add;
        if(f2x<0)
        {
            double ans = (4*x1*x1*x1) - (2*x1*x1*add) + (x1*mul);
            printf("Case %d: %0.10lf\n", ++caseno, ans);
        }
        else
        {
            double ans = (4*x2*x2*x2) - (2*x2*x2*add) + (x2*mul);
            printf("Case %d: %0.10lf\n", ++caseno, ans);
        }
    }

    return 0;
}
