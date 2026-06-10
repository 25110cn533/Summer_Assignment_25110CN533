#include<stdio.h>
int main(){
    int n,item,i,count=0;
    printf("enter the sixe of the array : ");
    scanf("%d",&n);
    printf("enter the elements of the array : ");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the item : ");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            count++;
        }
    }
    printf("No. of occurences : %d",count);
    return 0;
}