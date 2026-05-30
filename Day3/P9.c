#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime");
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                printf("not prime");
                return 0;
            }
        }
    printf("prime");
    }
    return 0;
}