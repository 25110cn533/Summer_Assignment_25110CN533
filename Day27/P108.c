#include<stdio.h>
int main(){
    char name[50];
    int roll;
    float m1,m2,m3,m4,m5,total,per;
    printf("enter name: ");
    scanf("%s",name);
    printf("enter roll number : ");
    scanf("%d",&roll);
    printf("enter marks of 5 subjects : ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    per=total/5;
    printf("\n----- MARKSHEET -----\n");
    printf("Name : %s\n",name);
    printf("Roll : %d\n",roll);
    printf("Total Marks : %f\n", total);
    printf("Percentage : %f%%\n", per);
    if(per>=40){
        printf("Result : Pass");
    }    
    else{
        printf("Result : Fail");
    }    
    return 0;
}