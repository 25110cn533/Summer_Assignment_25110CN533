#include<stdio.h>
int main(){
    int n,i,j,found;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        found=0;
        for(j=0;j<n-1;j++){
            if(arr[j]==i){
                found=1;
                break;
            }
        }
        if(found==0){
            printf("missing number = %d",i);
            break;
        }
    }
    return 0;
}