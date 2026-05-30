#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    for(i=a;i>=1;i--) {
        if(a%i==0 && b%i==0){
            printf("GCD : %d",i);
            break;
        }
    }
    return 0;
}