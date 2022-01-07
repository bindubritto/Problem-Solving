#include<stdio.h>
#include<cassert>

struct matrix
{
    int v[5][5];
    int row, col;
};

int mod=10007, c;


matrix multiply(matrix a, matrix b){
    assert(a.col == b.row); // c1==r2 hoile all zero.

    matrix r; // resultant matrix
    r.row = a.row; // a er row er soman
    r.col = b.col; // b er column er soman
    for(int i=0;i<r.row;i++){
        for(int j=0;j<r.col;j++){
            int sum=0;
            for(int k=0;k<a.col;k++){
                sum+=a.v[i][k]*b.v[k][j];
                sum%=mod;
            }
            r.v[i][j]=sum;
        }
    }
    return r;
}

matrix power(matrix mat, int p)
{
    assert(p>=1);
    if(p==1)return mat;
    if(p%2==1){
        return multiply(mat, power(mat, p-1));
    }
    matrix ret = power(mat, p/2);
    ret = multiply(ret, ret);

    return ret;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int tcase, caseno=0;
    int a, b, n;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d %d %d", &n, &a, &b, &c);
        // preparing the matrix
        matrix mat;
        mat.row = mat.col = 4;
        mat.v[0][0]=a; mat.v[0][1]=0; mat.v[0][2]=b; mat.v[0][3]=1;
        mat.v[1][0]=1; mat.v[1][1]=0; mat.v[1][2]=0; mat.v[1][3]=0;
        mat.v[2][0]=0; mat.v[2][1]=1; mat.v[2][2]=0; mat.v[2][3]=0;
        mat.v[3][0]=0; mat.v[3][1]=0; mat.v[3][2]=0; mat.v[3][3]=1;

        if(n<4){
            if(n==0)printf("Case %d: %d\n", ++caseno, 0);
            if(n==1)printf("Case %d: %d\n", ++caseno, 0);
            if(n==2)printf("Case %d: %d\n", ++caseno, 0);
            if(n==3)printf("Case %d: %d\n", ++caseno, c);
        }
        else{
            mat = power(mat, n-2);
            int ans = c*mat.v[0][3];
            ans %= mod;
            printf("Case %d: %d\n", ++caseno, ans);
        }
    }
    return 0;
}
