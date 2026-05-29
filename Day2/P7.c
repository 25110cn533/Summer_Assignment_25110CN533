#include<stdio.h>
int main(){
    int n,dig,prod=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0){
        dig = n % 10;
        prod = prod * dig;
        n = n / 10;
    }
    printf("the product = %d",prod);
    return 0;
}