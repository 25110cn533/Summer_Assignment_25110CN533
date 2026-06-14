#include<stdio.h>
int main(){
    int n,i,j,item,low,high,mid,found=0;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elelements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("item to search : ");
    scanf("%d",&item);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==item){
            found=1;
            break;
        }
        else if(arr[mid]<item){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found){
        printf("item is at %d",mid);
    }
    else{
        printf("item not found");
    }
    return 0;
}