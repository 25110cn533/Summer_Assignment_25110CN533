#include<stdio.h>
#include<string.h>
int main(){
    int i,count,len;
    char str[100];
    printf("enter the string : ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        count=1;
        while(str[i]==str[i+1]){
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
    return 0;
}