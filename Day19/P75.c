#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter the rows and columns :\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("enter the matrix : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("transpose matrix : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}        