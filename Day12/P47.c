#include<stdio.h>
int fibo(int n);
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("Fibonacci at %dth place = %d",n,fibo(n));
    return 0;
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}