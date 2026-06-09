#include<stdio.h>
int main(){
    int n,i,sum=0;
    float avg;
    printf("enter sixe of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("sum = %d\n",sum);
    printf("Average = %f",avg);
    return 0;
}