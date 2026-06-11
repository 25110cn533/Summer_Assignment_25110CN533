#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            count++;
        }
    }
    printf("after moving the zeroes :");
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            printf("%d",arr[i]);
        }
    }
    for(i=0;i<count;i++){
        printf("0");
    }
    return 0;
}