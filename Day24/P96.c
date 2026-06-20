#include<stdio.h>
#include<string.h>
int main(){
    int i,j,count,len;
    char str[100];
    printf("enter the string : ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        count=0;
        for(j=0;j<i;j++){
            if(str[i]==str[j]){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%c",str[i]);
        }
    }
    return 0;
}