#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n],temp[n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        temp[i-1]=arr[i];
    }
    temp[i-1]=arr[0];
    printf("after left rotation :");
    for(i=0;i<n;i++){
        printf("%d  ",temp[i]);
    }
    return 0;
}