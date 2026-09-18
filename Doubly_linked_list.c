// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node * prev;
    int data;
    struct node* next;
};


int main() {
    // Write C code here

    struct node * first = (struct node *)malloc (sizeof(struct node));
    struct node * second = (struct node* )malloc (sizeof(struct node));

    struct node * third = (struct node *)malloc (sizeof(struct node));
    
    first->data=10;
    second->data=20;
    third->data=30;

    first->prev = NULL;
    second->prev = first;
    third->prev = second;
    
    first->next=second;
    second->next=third;
    third->next=NULL;
    
    //Now traverse the doubly linked list 

    struct node * temp;
    struct node * head = NULL;

    head = first;

    printf("Doubly Linked List --> \n");
    
    temp = head;

    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
    
        

    return 0;
}