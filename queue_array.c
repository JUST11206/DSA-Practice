
#include <stdio.h>

int main() {

    int stack[100];
    int front = 0;
    int rear = -1;
    //push operation

    int operation,value;
    char confirm;

    while(operation <= 3){
    printf("Welcome to Queue Program \n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");    
    printf("Enter operation to perform :");    
    scanf("%d",&operation);
    if(operation == 1){
        if (rear >= 99) {
            printf("Queue Overflow! Cannot Enque more elements.\n");
        }
            else{
        printf("Enter value to insert :");
        scanf("%d",&value);
        rear++;
        stack[rear]=value;
        printf("ELements Added Successfully\n");
        }
    }
    else if (operation == 2) {
    if (rear < 0) {
        printf("Stack Underflow! No elements to delete.\n");
    } else {
        printf("Are you sure you want to delete element?\nEnter y/n: ");
        scanf(" %c", &confirm); // Fixed: %c for char

        if (confirm == 'y' || confirm == 'Y') { // Fixed: single quotes for char
            
            front++;
            printf("Element deleted successfully!\n");
        } else {
            printf("Element not deleted.\n");
        }
    }
}
     else if(operation == 3){
             printf("Display ALL Elements \n");
         for(int i=front;i<=rear;i++){
             printf("%d",stack[i]);
             
             printf("\n");
         }
     }   
    else{
        printf("Something wrong !");
        break;
    }
    }
  
    return 0;
}