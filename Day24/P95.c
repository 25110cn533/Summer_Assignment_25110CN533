#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j=0,max=0,len;
    char str[100],word[100],longest[100];
    printf("enter the string : ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i]!=' '&&str[i]!='\n'){
            word[j++]=str[j];
        }
        else{
            word[j]='\0'; 
            if(strlen(word)>max){
                max=strlen(word);
                strcpy(longest,word);
            }
            j=0;
        }    
        i++;
    }
    printf("longest word : %s",longest);
    return 0;
}