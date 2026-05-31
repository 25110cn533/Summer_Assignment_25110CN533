#include<stdio.h>
int main(){
    int n,first=0,second=1,next,i;
    printf("enter the number");
    scanf("%d",&n);
    printf("the series: \n");
    printf("%d \t %d \t",first,second);
    for(i=1;i<=n-2;i++){
        next=first+second;
        printf("%d \t",next);
        first=second;
        second=next;

    }
    return 0;
}