#include<stdio.h>
int main(){
    int n,item,i;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the item to search :");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            printf("item found at %d",i);
            return 0;
        }
    }
    printf("item not found");
    return 0;

}