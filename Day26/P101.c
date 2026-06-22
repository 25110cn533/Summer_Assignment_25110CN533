#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess,count = 0;
    srand(time(0));
    num=rand()%100+1;
    do{
        printf("Guess a number (1-100): ");
        scanf("%d",&guess);
        count++;
        if(guess>num){
            printf("above 100\n");
        }    
        else if(guess<num){
            printf("below 1\n");
        }    
        else{
            printf("right naswer after %d attempts.\n",count);
        }    
    }while(guess!=num);
    return 0;
}