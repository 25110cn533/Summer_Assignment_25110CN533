#include<stdio.h>
int main(){
    int n,i,j,sum;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the sum : ");
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d + %d = %d",arr[i],arr[j],sum);
                return 0;
            }
        }
    }
    printf("no pair found");
    return 0;
}