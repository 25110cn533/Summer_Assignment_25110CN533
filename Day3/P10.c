#include<stdio.h>
int main(){
    int beg,end,i,j;
    printf("enter the begining and end point: ");
    scanf("%d%d",&beg,&end);

        for(i=beg;i<=end;i++){
            for(j=2;j<=i;j++){
                if(i%j==0){
                    break;
                }
            }
            if(j==i){
                printf("%d \n",i);
            }
        }
    return 0;
}