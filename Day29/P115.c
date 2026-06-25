#include<stdio.h>
#include<string.h>

void len(char s[]){
    printf("length = %d\n",strlen(s));
}
void copy(char s[]){
    char t[100];
    strcpy(t, s);
    printf("copied string = %s\n", t);
}
int main(){
    char s[100];
    int ch;
    printf("enter a string: ");
    scanf("%s",s);
    do{
        printf("\n1. length");
        printf("\n2. copy");
        printf("\n3. exit");
        printf("\nenter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                length(s);
                break;
            case 2:
                copy(s);
                break;
            case 3:
                printf("program finished");
                break;
            default:
                printf("invalid choice");
        }
    }
    while(ch!=3);
    return 0;
}