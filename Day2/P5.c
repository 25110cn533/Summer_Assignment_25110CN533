#include<stdio.h>
int main(){
    int n,sum=0,dig;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0){
        dig=n%10;
        sum+=dig;
        n=n/10;
    }
    printf("the sum is %d",sum);
    return 0;
}
