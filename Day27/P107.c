#include <stdio.h>
int main(){
    float basic,hra,a,gross,hrap,ap;
    printf("enter the basic salary: ");
    scanf("%f",&basic);
    printf("enter the house rent allowance % :");
    scanf("%f",&hrap);
    printf("enter the allowance % : ");
    scanf("%f",&ap);
    hra=hrap*basic;  
    a=ap*basic;    
    gross=basic+hra+a;
    printf("\nHRA = %f",hra);
    printf("\nDA = %f",a);
    printf("\nGross Salary = %f",gross);
    return 0;
}