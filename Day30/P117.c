#include<stdio.h>
int main(){
    int choice,n=0,i,roll[100];
    char name[100][50];
    float marks[100];
    do{
        printf("\n----student record system----\n");
        printf("1. add student\n");
        printf("2. display students\n");
        printf("3. search student\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter roll number: ");
                scanf("%d",&roll[n]);
                printf("enter name: ");
                scanf("%s",name[n]);
                printf("enter marks: ");
                scanf("%f",&marks[n]);
                n++;
                printf("student added\n");
                break;
            case 2:
                if(n==0){
                    printf("no record found!\n");
                }
                else{
                    printf("\nstudent records:\n");
                    printf("Roll\tName\tMarks\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\t%f\n",roll[i],name[i],marks[i]);
                    }
                }
                break;
            case 3:{
                int r, found = 0;
                printf("enter roll number to search: ");
                scanf("%d",&r);
                for(i=0;i<n;i++){
                    if(roll[i]==r){
                        printf("\nstudent found!\n");
                        printf("roll : %d\n",roll[i]);
                        printf("name : %s\n",name[i]);
                        printf("marks: %f\n",marks[i]);
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    printf("student not found\n");
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