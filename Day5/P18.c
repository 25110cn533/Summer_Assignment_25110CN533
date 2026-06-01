#include<stdio.h>
int main(){
    int n,i,temp,r,sum=0,fact;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        r=temp%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        printf("Stromg number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}