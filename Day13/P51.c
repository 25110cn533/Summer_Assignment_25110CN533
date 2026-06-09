#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int larg=arr[0];
    int small=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>larg){
            larg=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("largest element = %d",larg);
    printf("smallest element = %d",small);
    return 0;
}