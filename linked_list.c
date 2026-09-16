#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next; 
};

int main(){
    struct node *head = NULL;

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 100;
    newNode->next = NULL;

    head = newNode;

    // Insert a node at the end
    newNode = malloc(sizeof(struct node));
    newNode->data = 200;
    newNode->next = NULL;

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    //traverse
    temp = head;
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp = temp->next;  
    }
    
    return 0; 
}