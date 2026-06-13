#include<stdio.h>
int main(){
int n1,n2,i,duplicate,j;
    printf("enter the size of first array :");
    scanf("%d",&n1);
    int a[n1];
    printf("enter the elemenets : ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array :");
    scanf("%d",&n2);
    int b[n2];
    printf("enter the elemenets : ");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    printf("union :");
    for(i=0;i<n1;i++){
        printf("%d  ",a[i]);
    }
    for(i=0;i<n2;i++){
        duplicate=0;
        for(j=0;j<n1;j++){
            if(b[i]==a[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==0){
            printf("%d  ",b[i]);
        }
    }
    return 0;
}