#include<stdio.h>
int main(){
    int score=0,ans;
    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d",&ans);
    if(ans==1){
        score++;
    }    
    printf("Q2. 1 + 1 = ?\n");
    printf("1. 10\n2. 2\n3. 11\n");
    scanf("%d",&ans);
    if(ans==2){
        score++;
    }    
    printf("Q3. The current prime minister of India?\n");
    printf("1. Ambani\n2. Rahul Gandhi\n3. Narendra Modi\n");
    scanf("%d",&ans);
    if(ans==3){
        score++;
    }    
    printf("\nYour score = %d/3\n",score);
    return 0;
}