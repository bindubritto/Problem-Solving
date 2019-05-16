#include<stdio.h>

// oco = open then close then open the lift door;
// ee = enter then exit from lift;

int main()
{
    int up, lift, me, oco, ee, time, caseno=0, t;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &me, &lift);
        time = 0;

        if(lift>me){
            lift = lift*4;
            oco = 9;
            ee = 10;
            time = lift + oco + ee;

            printf("Case %d: %d\n", ++caseno, time);
        }
        else
        {
            up = me - lift;
            time = (me+up)*4;
            oco = 9;
            ee = 10;

            time = time+oco+ee;

            printf("Case %d: %d\n", ++caseno, time);
        }
    }

    return 0;
}
