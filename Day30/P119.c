#include<stdio.h>
int main(){
    int choice,n=0,i;
    int empid[100];
    char name[100][50];
    float salary[100];
    do{
        printf("\n----employee management system----\n");
        printf("1. add employee\n");
        printf("2. display employees\n");
        printf("3. search employee\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter employee ID: ");
                scanf("%d",&empid[n]);
                printf("enter employee name: ");
                scanf("%s",name[n]);
                printf("enter salary: ");
                scanf("%f",&salary[n]);
                n++;
                printf("employee added successfully!\n");
                break;
            case 2:
                if(n==0){
                    printf("no records found!\n");
                }
                else{
                    printf("\nID\tName\tSalary\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\t%f\n",empid[i],name[i],salary[i]);
                    }
                }
                break;
            case 3:{
                int id,found=0;
                printf("enter employee ID to search: ");
                scanf("%d",&id);
                for(i=0;i<n;i++){
                    if(empid[i]==id){
                        printf("\nemployee found!\n");
                        printf("ID     : %d\n",empid[i]);
                        printf("Name   : %s\n",name[i]);
                        printf("Salary : %f\n",salary[i]);
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    printf("employee not found!\n");
                }
                break;
            }
            case 4:
                printf("program finished\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    }
    while(choice!=4);
    return 0;
}