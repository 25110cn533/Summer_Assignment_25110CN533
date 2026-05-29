#include<stdio.h>
int main(){
    int n,orignal,num,dig,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    orignal=n;
    while(n!=0){
        dig = n%10;
        rev = rev*10+dig;
        n = n/10; 
    }
    if(rev==orignal){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;
}