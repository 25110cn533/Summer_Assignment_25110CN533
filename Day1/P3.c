#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter the number for factorial");
    scanf("%d",&n);
    if(n<0){
        printf("error");
    } 
    else{
        for(i=1;i<=n;++i){
        fact*=i;
        }
    } 
    printf("the factorial is: %d",fact);
    return 0;  
}