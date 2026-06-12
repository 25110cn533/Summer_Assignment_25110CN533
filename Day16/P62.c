#include<stdio.h>
int main(){
    int n,i,j,count,max=0,item;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            item=arr[i];
        }
    }
    printf("element with maximum frequency : %d",item);
    return 0;
}