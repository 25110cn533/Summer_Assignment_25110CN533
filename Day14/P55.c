#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    int slarge=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>large){
            slarge=large;
            large=arr[i];
        }
        else if(arr[i]>slarge && arr[i]!=large){
            slarge=arr[i];
        }
    }
    printf("Second largest element is : %d",slarge);
    return 0;
}
