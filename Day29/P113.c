#include<stdio.h>
int main(){
    int choice;
    float a,b;
    do{
        printf("\n--- menu driven calculator ---\n");
        printf("1. addition\n");
        printf("2. subtraction\n");
        printf("3. multiplication\n");
        printf("4. division\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        if(choice>=1&&choice<=4){
            printf("enter two numbers: ");
            scanf("%f%f",&a,&b);
        }
        switch(choice){
            case 1:
                printf("result = %f\n",a+b);
                break;
            case 2:
                printf("result = %f\n",a-b);
                break;
            case 3:
                printf("result = %f\n",a*b);
                break;
            case 4:
                if(b!=0){
                    printf("result = %f\n",a/b);
                }    
                else{
                    printf("division by zero is not possible\n");
                }    
                break;
            case 5:
                printf("program finished\n");
                break;
            default:
                printf("invalid choice\n");
        }
    }
    while(choice!=5);
    return 0;
}