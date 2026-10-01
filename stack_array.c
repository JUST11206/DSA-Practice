// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int stack[100];
    int top = -1;
    //push operation

    int operation,value;
    char confirm;

    while(operation <= 3){
    printf("Welcome to stack program \n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. Display\n");    
    printf("Enter operation to perform :");    
    scanf("%d",&operation);
    if(operation == 1){
        if (top >= 99) {
            printf("Stack Overflow! Cannot push more elements.\n");
        }
            else{
        printf("Enter value to insert :");
        scanf("%d",&value);
        top++;
        stack[top]=value;
        printf("ELements Added Successfully\n");
        }
    }
    else if (operation == 2) {
    if (top < 0) {
        printf("Stack Underflow! No elements to delete.\n");
    } else {
        printf("Are you sure you want to delete element?\nEnter y/n: ");
        scanf(" %c", &confirm); // Fixed: %c for char

        if (confirm == 'y' || confirm == 'Y') { // Fixed: single quotes for char
            
            top--;
            printf("Element deleted successfully!\n");
        } else {
            printf("Element not deleted.\n");
        }
    }
}
     else if(operation == 3){
             printf("Display ALL Elements \n");
         for(int i=top;i>=0;i--){
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