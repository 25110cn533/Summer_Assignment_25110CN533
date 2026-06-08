#include<stdio.h>
int palindrome(int n);
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);\
    if(palindrome(n)){
        printf("%d is a palindrome",n);
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}
int palindrome(int n){
    int rev=0,temp=n;
    while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    return rev==n;
}