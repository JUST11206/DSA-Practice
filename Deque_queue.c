//This is the DEQUE queue program

#include <stdio.h>
#define size 100

int arr[size];
int front = -1;
int rear = -1;

//insertion at the rear in DEQUE
void enqueueR(int value){
  if(rear == size-1){
    printf("Overflow !\n");
    return;
  }
  //edge cases
  if(front == -1 && rear == -1){
    front = 0;
    rear = 0;
  }
  else{
    rear++;
}
  arr[rear] = value;
}


//deletion at the first
void dequeueF(){
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

//insertion at the first
//help of GenAI
void enqueueF(int value) {
    if ((front == 0 && rear == size - 1) ||
           (front == rear + 1)) {
        printf("Overflow!\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else if (front == 0) {
        front = size - 1;
    }
    else {
        front--;
    }

    arr[front] = value;
    printf("Insertion at front complete!\n");
}
//deletion at the rear
void dequeueR(){
  if(front == -1){
    printf("Underflow !");
    return;
  }
  if(front == rear){
    front--;
    rear--;
  }

  else{
    rear--;
  }
}

void display(){
  if(front == -1){
    printf("Empty Array !\n");
    return;
  }

    for(int i=front; ;i = (i+1)%size){
      printf("%d ",arr[i]);
      if(i==rear){
        break;
      }
    }
}

int main() {
    int choice, value;

    printf("Circular Deque Program");

    while (1) {
        printf("\n1. Enqueue at Front\n");
        printf("2. Dequeue at Front\n");
        printf("3. Enqueue at Rear\n");
        printf("4. Dequeue at Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueueF(value);
                break;

            case 2:
                dequeueF();
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueueR(value);
                break;

            case 4:
                dequeueR();
                break;

            case 5:
                display();
                break;

            case 6:
                return 0;

            default:
                printf("Please enter a valid choice!\n");
        }
    }

    return 0;
}