//Make a input linked list and reverse it 
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

struct node* createList(int n){
    struct node *head = NULL;
    struct node *newnode=NULL;
    struct node *temp;

    for(int i=0;i<n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter value: %d:",i+1);
        scanf("%d", &newnode->data);
        
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;    
        }
    }
    return head;
}

struct node* reverseList(struct node* head){
    struct node *prev = NULL;
    struct node *current = head;
    struct node *tmp = NULL;

    while(current != NULL){
        tmp = current->next; // Store next node
        current->next = prev; // Reverse the link
        prev = current;       // Move prev to current
        current = tmp;       // Move to next node
    }
    return prev; // New head of the reversed list
}

int main() {
    int n;
    struct node *head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = createList(n);

    // Display original linked list
    printf("Original Linked List: ");
    struct node *temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Reverse the linked list
    head = reverseList(head);

    // Display reversed linked list
    printf("Reversed Linked List: ");
    temp = head;
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}