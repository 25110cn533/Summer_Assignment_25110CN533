#include<stdio.h>
struct Book{
    int id;
    char name[50];
};
int main(){
    struct Book b;
    printf("enter book ID: ");
    scanf("%d",&b.id);
    printf("enter book name: ");
    scanf("%s",b.name);
    printf("\nBook ID: %d",b.id);
    printf("\nBook Name: %s",b.name);
    return 0;
}