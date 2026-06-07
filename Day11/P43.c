#include<stdio.h>
int prime(int n);
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(prime(n)){
        printf("Prime number");
    }
    else{
        printf("Not a prime numnber");
    }
    return 0;
}
int prime(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
