#include<stdio.h>
int main(){
    int n,power,result=1,i;
    printf("enter the number and the power : ");
    scanf("%d%d",&n,&power);
    for(i=1;i<=power;i++){
        result=result*n;
    }
    printf("%d ^ %d = %d",n,power,result);
    return 0;
}