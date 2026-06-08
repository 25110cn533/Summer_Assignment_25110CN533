#include<stdio.h>
int armstrong(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(armstrong(n)){
        printf("%d is a armstrong number");
    }
    else{
        printf("Not a armstrong number");
    }
    return 0;
}
int armstrong(int n){
    int temp=n,sum=0,r;
    while(temp>0){
        r=temp%10;
        sum+=r*r*r;
        temp=temp/10;
    }
    return sum==n;
}