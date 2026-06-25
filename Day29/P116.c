#include<stdio.h>
int main(){
    int qty,choice,add,sell;
    printf("enter initial stock: ");
    scanf("%d",&qty);
    do{
        printf("\n--- inventory management ---\n");
        printf("1. view stock\n");
        printf("2. add stock\n");
        printf("3. sell stock\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("current stock = %d\n",qty);
                break;
            case 2:
                printf("enter quantity to add: ");
                scanf("%d",&add);
                qty=qty+add;
                printf("stock added successfully.\n");
                break;
            case 3:
                printf("enter amount to sell: ");
                scanf("%d",&sell);
                if(sell<=qty){
                    qty=qty-sell;
                    printf("stock sold successfully.\n");
                }
                else{
                    printf("insufficient stock!\n");
                }
                break;
            case 4:
                printf("program finished\n");
                break;
            default:
                printf("invalid choice!\n");
        }
    }
    while(choice!=4);
    return 0;
}