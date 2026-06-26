#include<stdio.h>
int main(){
    int choice,n=0,i;
    int bookid[100];
    char bookname[100][50];
    do{
        printf("\n----mini library system----\n");
        printf("1. add book\n");
        printf("2. display books\n");
        printf("3. search book\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter book ID: ");
                scanf("%d",&bookid[n]);
                printf("enter book name: ");
                scanf("%s",bookname[n]);
                n++;
                printf("book added successfully!\n");
                break;
            case 2:
                if(n==0){
                    printf("no books\n");
                }
                else{
                    printf("\nBook ID\tBook Name\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\n",bookid[i],bookname[i]);
                    }
                }
                break;
            case 3:
            {
                int id,found=0;
                printf("enter book ID to search: ");
                scanf("%d",&id);
                for(i=0;i<n;i++){
                    if(bookid[i]==id){
                        printf("\nbook found!\n");
                        printf("book ID   : %d\n",bookid[i]);
                        printf("book name : %s\n",bookname[i]);
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    printf("book not found!\n");
                }
                break;
            }
            case 4:
                printf("program finished\n");
                break;
            default:
                printf("invalid choice!\n");
        }
    }
    while(choice!=4);
    return 0;
}