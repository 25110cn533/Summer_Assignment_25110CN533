#include<stdio.h>
int main(){
    int n,i,larg=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        while(n%i==0){
            larg=i;
            n=n/i;
        }
    }
    printf("Largest prime factor : %d",larg);
    return 0;
}