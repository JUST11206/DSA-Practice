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
    while(temp != NULL){
        temp = temp->next;
    }
    free(temp);
}



void display(struct node *head){
    struct node *temp = head;
    while(temp->next != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n;
    printf("Program is Live.....\n");
    printf("Enter number of nodes to create :");
    scanf("%d",&n);
    struct node *head = createLL(n);
    printf("Linked List :");
    display(head);
    deleteLL(head);
    printf("Delete last node :");
    display(head);
    
    return 0;
}
