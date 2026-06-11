#include<stdio.h>
int main(){
    int i,n;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("reverse array : ");
    for(i=n-1;i>=0;i--){
        printf("%d  ",arr[i]);
    }
    return 0;
}