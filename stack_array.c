#include <stdio.h>

int main() {

    int stack[5],n=0,item;
    int top = -1;

    // PUSH
    while(n<3){
        printf("Enter the value: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        n++;
    }

    // DISPLAY
    printf("Stack elements are:\n");

    for(int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }


    if(top == -1){
        printf("Underflow !");
    }

    else{
        top--; //1
    }

    // DISPLAY
    printf("Stack elements are:\n");

    for(int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    
    return 0;
}