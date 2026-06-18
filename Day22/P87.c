#include<stdio.h>
#include<string.h>
int main(){
    int i,len,count=0;
    char str[100],ch;
    printf("enter a string : ");
    fgets(str,sizeof(str),stdin);
    printf("enter the character to find : ");
    scanf("%c",&ch);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("frequency of %c is %d",ch,count);
    return 0;
}