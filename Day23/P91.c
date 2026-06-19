#include<stdio.h>
#include<string.h>
int main(){
    int i,j,temp,l1,l2;
    char s1[100],s2[100];
    printf("enter the first string : ");
    fgets(s1,sizeof(s1),stdin);
    printf("enter the second string : ");
    fgets(s2,sizeof(s2),stdin);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++){
        for(j=i+1;j<l1;j++){
            if(s1[j]>s1[i]){
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
        }
    }
    for(i=0;i<l2;i++){
        for(j=i+1;j<l2;j++){
            if(s2[j]>s2[i]){
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }
    if(strcmp(s1,s2)==0){
        printf("anagram");
    }
    else{
        printf("not anagram");
    }
    return 0;
}    