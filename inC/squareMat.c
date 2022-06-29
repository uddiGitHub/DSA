#include<stdio.h>
#define MAX 10
int main(){
    int n,i,j;
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
    printf("Enter the rows and columns of matrix A: \n");
    scanf("\n%d",&n);
    printf("Enter the elements of the matrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix B: \n");
    scanf("\n%d",&n);
    printf("Enter the elements of matrix B: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int add=0;
            for(int k=0;k<n;k++){
                add += a[i][k] * b[k][j];
            }
            c[i][j]= add;
        }
    }
    printf("The matrix multiplication of A and B is: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("[%d][%d]=%d\n",i,j,c[i][j]);
        }
    }
    return 0;
}
