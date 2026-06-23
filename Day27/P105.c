#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct Student s;
    printf("enter roll number: ");
    scanf("%d",&s.roll);
    printf("enter name: ");
    scanf("%s",s.name);
    printf("enter marks: ");
    scanf("%f",&s.marks);
    printf("\n--- Student Details ---\n");
    printf("roll no: %d\n",s.roll);
    printf("name: %s\n",s.name);
    printf("marks: %f\n",s.marks);
    return 0;
}