#include<stdio.h>
int main(){
    float balance=5000,amount;
    int choice;
    printf("1. deposit\n2. withdraw\n");
    printf("enter choice: ");
    scanf("%d",&choice);
    if(choice==1){
        printf("enter amount: ");
        scanf("%f",&amount);
        balance+=amount;
    }
    else if(choice==2){
        printf("enter amount: ");
        scanf("%f",&amount);
        if(amount<=balance){
            balance-=amount;
        }    
        else{
            printf("insufficient balance\n");
        }    
    }
    printf("Balance = %f",balance);
    return 0;
}