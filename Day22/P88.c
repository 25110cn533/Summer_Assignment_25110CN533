#include<stdio.h>
#include<string.h>
int main(){
    int i,count=0,len;
    char str[100];
    printf("enter the string : ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("number of spaces : %d",count);
    return 0;
}