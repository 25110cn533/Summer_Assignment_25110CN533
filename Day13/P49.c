#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
    for(i=0;i<n;i++){
        printf(" %d ,",arr[i]);
    }
    return 0;

}