#include<stdio.h>
struct Contact{
    char name[50];
    long long int phone;
};
int main(){
    struct Contact c;
    printf("enter name: ");
    scanf("%s",c.name);
    printf("enter phone number: ");
    scanf("%lld",&c.phone);
    printf("\n---contact details---\n");
    printf("name: %s\n",c.name);
    printf("phone number: %lld\n",c.phone);
    return 0;
}