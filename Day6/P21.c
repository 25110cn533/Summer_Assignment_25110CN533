#include<stdio.h>
int main(){
    int bin[50],dec,i,j;
    printf("enter the decimal number");
    scanf("%d",&dec);
    if(dec==0){
        printf("In binary : 0");
        return 0;
    }
    for(i=0;dec>0;i++){
        bin[i]=dec%2;
        dec=dec/2;
    }
    printf("In binary :");
    for(j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
    return 0;
}