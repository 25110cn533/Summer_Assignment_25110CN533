#include<stdio.h>
#include<string.h>
int main(){
    int i,word=1,len;
    char str[100];
    printf("enter the string : ");
    fgets(str,sizeof(str),stdin);
    len=sizeof(str);
    for(i=0;i<len;i++){
        if(str[i]==' '){
            word++;
        }
    }
    printf("the number of words : %d",word);
    return 0;
}