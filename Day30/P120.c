#include<stdio.h>
int roll[100],n=0;
float marks[100];
char name[100][50];
void addStudent(){
    printf("enter roll number: ");
    scanf("%d",&roll[n]);
    printf("enter name: ");
    scanf("%s",name[n]);
    printf("enter marks: ");
    scanf("%f",&marks[n]);
    n++;
    printf("student added successfully!\n");
}
void displayStudent(){
    int i;
    if(n==0){
        printf("no records found!\n");
        return;
    }
    printf("\nRoll\tName\tMarks\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%f\n",roll[i],name[i],marks[i]);
    }
}
void searchStudent(){
    int i,r,found=0;
    printf("enter roll number: ");
    scanf("%d",&r);
    for(i=0;i<n;i++){
        if(roll[i]==r){
            printf("\nstudent found\n");
            printf("Roll : %d\n",roll[i]);
            printf("Name : %s\n",name[i]);
            printf("Marks: %f\n",marks[i]);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("student not found!\n");
    }
}
int main()
{
    int choice;
    do{
        printf("\n----student record system----\n");
        printf("1. add student\n");
        printf("2. display students\n");
        printf("3. search student\n");
        printf("4. exit\n");
        printf("enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                addStudent();
                break;
            case 2:
                displayStudent();
                break;
            case 3:
                searchStudent();
                break;
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