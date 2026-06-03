#include<stdio.h>
int digsum(int n);
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("Sum of digits = %d",digsum(n));
    return 0;
}
int digsum(int n){
    if(n==0)
        return 0;
    return (n%10)+(digsum(n/10));
}