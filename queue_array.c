
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



//New Code 
//10-oct-2026
//This is a simple Queue program insertion and deletion in C

#include <stdio.h>
#include <stdlib.h>
#define size 100
int arr[size];
int front = -1;
int rear = -1;

//Enqueue
//insertion at the end using array
void insertQueue(int value){
  if(rear == size-1){
    printf("Overflow !\n");
  }
  //edge cases
  else if(front == -1 && rear == -1){
    front = 0;
    rear = 0;
    arr[rear] = value;
  }
  else if(front == rear){
    rear++;
    arr[rear] = value;
  }
  else{
  rear++;
  arr[rear] = value;

}}


//Dequeue
//Deletion at the first using array

void delQueue(int arr[]){
  if(front == -1){
    printf("Underflow !\n");
  }
  else if(front == rear){
    front--;
    rear--;
  }
  else{
    front = front + 1;
  }
}


void main(){
  int value,n;


  
  printf("Enter Number of items :");
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
  printf("Enter value :");
  scanf("%d",&value);
    arr[i]=value;
  insertQueue(value);
  }

  printf("Array :");
  for(int i=front;i<=rear;i++){
    printf("%d ",arr[i]);
  }

//delete
  delQueue(arr);
  printf("After Dequeue !\n");
  for(int i=front;i<=rear;i++){
    printf("%d ",arr[i]);
  }
  
}