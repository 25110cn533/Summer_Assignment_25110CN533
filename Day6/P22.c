#include<stdio.h>
int main(){
    int bin,dec=0,temp=1,r;
    printf("enter a binary number :");
    scanf("%d",&bin);
    while(bin>0){
        r=bin%10;
        dec=dec+r*temp;
        temp=temp*2;
        bin=bin/10;
    }
    printf("Decimal: %d",dec);
    return 0;
}