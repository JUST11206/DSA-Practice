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

    printf("Doubly Linked list\n");
    printf("%d ",first->data);
    printf("%d " ,second->data);
    printf("%d " ,third->data);

    
    
    
        
    
    
    return 0;
}