#include<stdio.h>
#include<string.h>
int main(){
    int i,j,len,count,max=0;
    char str[100],mchar;
    printf("enter the string : ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;i<len;i++){
        count=0;
        for(j=0;j<len;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>max){
        max=count;
        mchar=str[i];
        }
    }
    printf("maximum ocuuring character : %c",mchar);
    return 0;    
}