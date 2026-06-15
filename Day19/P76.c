#include<stdio.h>
int main(){
    int n,i,j,sum=0;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
    }
    printf("diagonal sum : %d",sum);
    return 0;
}