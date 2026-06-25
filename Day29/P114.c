#include<stdio.h>
int main(){
    int arr[100],n,i,choice,pos,value;
    printf("enter size of array : ");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    do{
        printf("\n---array operations---\n");
        printf("1. display array\n");
        printf("2. insert element\n");
        printf("3. delete element\n");
        printf("4. search element\n");
        printf("5. exit\n");
        printf("enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("array: ");
                for(i=0;i<n;i++){
                    printf("%d",arr[i]);
                }    
                printf("\n");
                break;
            case 2:
                printf("enter position and value: ");
                scanf("%d%d",&pos,&value);
                for(i=n;i>pos-1;i--){
                    arr[i]=arr[i-1];
                }    
                arr[pos-1]=value;
                n++;
                printf("element inserted.\n");
                break;
            case 3:
                printf("enter position to delete: ");
                scanf("%d",&pos);
                for(i=pos-1;i<n-1;i++){
                    arr[i]=arr[i+1];
                }    
                n--;
                printf("element deleted.\n");
                break;
            case 4:
                printf("enter element to search: ");
                scanf("%d",&value);
                for(i=0;i<n;i++){
                    if(arr[i]==value){
                        printf("element found at position %d\n",i+1);
                        break;
                    }
                }
                if(i==n){
                    printf("element not found.\n");
                }    
                break;
            case 5:
                printf("program finished\n");
                break;
            default:
                printf("invalid choice!\n");
        }
    } while(choice != 5);
    return 0;
}