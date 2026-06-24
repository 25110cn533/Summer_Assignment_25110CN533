#include<stdio.h>
int main(){
    int totalseats=50;
    int bookedseats,availableseats;
    printf("total seats available: %d\n",totalseats);
    printf("enter the number of tickets to book: ");
    scanf("%d",&bookedseats);
    if(bookedseats<=totalseats){
        availableseats=totalseats-bookedseats;
        printf("booking succesfull!\n");
        printf("no. of tickets booked: %d\n",bookedseats);
        printf("remaining seats: %d\n",availableseats);
    }
    else{
        printf("booking failed not enough seats\n");
    }
    return 0;
}