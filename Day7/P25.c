#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));
    return 0;
}
int fact(int n){
    if(n==0)
        return 1;   
    return n*fact(n-1);
}