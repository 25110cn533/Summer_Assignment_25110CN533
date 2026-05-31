#include<stdio.h>
int main(){
    int beg,end,temp,i,sum,r;
    printf("enter the start and end point");
    scanf("%d%d",&beg,&end);
    for(i=beg;i<=end;i++){
        temp=i;
        sum=0;
        while(temp>0){
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
    if(sum==i){
        printf("%d",i);
    }
    }
    return 0;
}