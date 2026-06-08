#include<stdio.h>
int perfect(int n);
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(perfect(n)){
        printf("%d is a perfect number",n);
    }
    else{
        printf("Not a perfect number");
    }
    return 0;
}
int perfect(int n){
    int sum=0,i;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum==n;
}