#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],temp[200];
    printf("enter the first string : ");
    scanf("%s",s1);
    printf("enter the second string : ");
    scanf("%s",s1);
    strcpy(temp,s1);
    strcat(temp,s1);
    if(strstr(temp,s2)){
        printf("string is rotated");
    }
    else{
        printf("not rotated");
    }
    return 0;
}