#include<stdio.h>
int rev(int n);
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("Reverse : ");
    rev(n);
    return 0;
}
int rev(int n){
    if(n==0)
        return 0;
    printf("%d",n%10);
    rev(n/10);
}