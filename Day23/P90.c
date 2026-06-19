#include<stdio.h>
#include<string.h>
int main(){
    int i,j,len;
    char str[100];
    printf("enter the string : ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(str[i]==str[j]){
                printf("first repeating character : %c",str[i]);
                return 0;
            }
        }
    }
    printf("no repeating characters");
    return 0;
}    