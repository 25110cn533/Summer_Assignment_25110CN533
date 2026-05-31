#include<stdio.h>
int main(){
    int n,sum=0,r,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
       r=temp%10 ;
       sum=sum+(r*r*r);
       temp=temp/10;
    }
    if(sum==n){
        printf("armstrong number");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}