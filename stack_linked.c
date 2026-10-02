// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node * next;
};

//create function() to create n number of linked list 
struct node *createLL(int n){
    int value;
    struct node *head = NULL;
    struct node *temp = NULL;

    for (int i = 0; i < n; i++) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        
        if (newNode == NULL) {
            printf("Overflow !\n");
            exit(0);
        }
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    return head;
}

void deleteLL(struct node *head){
    struct node * temp = head;

    if(head==NULL){
        printf("Overflow!");
    }
    if(head->next == NULL){
        free(head);
        head = head->next;
        printf("Deleted Success!");
    }
    temp = head;
    while(temp != NULL){
        temp = temp->next;

    }
    free(temp);
    temp->next = NULL;
}



void display(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

//insertion in linked list at the last
struct node * insertN(int value,struct node *head){
    struct node *temp = head;
    
    struct node * newNode = malloc(sizeof(struct node));
    newNode->data = value;
    
    if(head == NULL)
    {
        return 0;
    }
    if(temp == NULL){
        temp->next = newNode;
    }
    else{
        temp = head;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main() {
    int n,value;
    printf("Program is Live.....\n");
    printf("Enter number of nodes to create :");
    scanf("%d",&n);
    struct node *head = createLL(n);
    printf("Linked List :");
    display(head);

    int operation;
    while(1){
    printf("Select Stack operation \n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. Display\n");
    printf("Enter any key to exit!\n");    
    printf("Enter :");
    scanf("%d",&operation);

    if(operation==1){
        
        printf("Enter value :");
        scanf("%d",&value);
        insertN(value,head);
        printf("New Node insert successfully\n");
    }    
    else if(operation == 2){
        deleteLL(head);
        printf("Node deleted!");
    }

    else if(operation == 3){
        display(head);
    }    
    else{
        printf("program finished!");
        break;
    }    
    }
    return 0;
}
