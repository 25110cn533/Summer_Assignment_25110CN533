#include<stdio.h>
#include<string.h>
int main(){
    int i,j,count,len;
    char str[100];
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
        if(count==1){
            printf("the first non repeating character : %c",str[i]);
            break;
        }
    }
    return 0;
}