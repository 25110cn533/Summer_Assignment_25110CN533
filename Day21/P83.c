#include<stdio.h>
int main(){
    char str[100];
    int i=0,vowel=0,consonants=0;
    printf("enter the string : ");
    gets(str);
    while(str[i]!='\0'){
        if( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=="I" || str[i]=='O' || str[i]=='U'){
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            consonants++;
        }
        i++;
    }
    printf("number of vowels : %d\n",vowel);
    printf("number of consonants : %d\n",consonants);
    return 0;
}