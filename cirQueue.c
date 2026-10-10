#include <stdio.h>
#define size 5

int arr[size];
int front =-1;
int rear = -1;

//insert at rear 
void enqueueCir(int value){

  if((rear+1)%size == front){
    printf("Overflow !");
    return;
  }
  
  if(front == -1){
    front = rear = 0;
  }
  else {
    rear = (rear+1)%size;
  }
    arr[rear] = value;
  }

//deletetion at front 
void dequeueCir(){
  if(front == -1){
    printf("underflow!");
    return;
  }
    
  else if(front == rear){
    front = rear = -1;
  }
  else{
    front = (front+1)%size;
  }
}

//display
void display(){
  if(front == -1){
    printf("Underflow!");
    return;
  }
  else{
    printf("All Elements \n");
    for(int i=front;;i = (i+1)%size){
      printf("%d ",arr[i]);
      if(i==rear){
        break;
      }
    }
  }
}


void main(){
int choice,value;
  printf("This is a Circular Queue Program !\n");
  while(1){
    printf("\n1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter Choice :");
    scanf("%d",&choice);

    if(choice  == 1){
      printf("Enter Value :");
      scanf("%d",&value);
      enqueueCir(value);
    }
  else if(choice == 2){
    dequeueCir();
    printf("Deletion Complete !\n");
  }
    else if(choice == 3){
      display();
    }
    else if(choice >= 4){
      break;
    }
    else{
      printf("\nsomething wrong please enter valid input\n");
    }
  }
}