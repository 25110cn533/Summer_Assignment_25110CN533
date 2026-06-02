#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the number :");
    scanf("%d",&n);
    while(n>0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }
    printf("Number of bits : %d",count);
    return 0;
}