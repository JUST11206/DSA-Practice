#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){
    struct node *firstNode = malloc(sizeof(struct node));
    struct node *secondNode = malloc(sizeof(struct node));
    firstNode->data = 10;
    firstNode->next =secondNode;
    secondNode->data = 20;
    secondNode->next = NULL;
   
    struct node *head = firstNode;
    struct node * temp = head;
    printf("Before deletion of last node\n");
   while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
   
    
    //now delete the last node 
   temp = head->next;
    free(temp);
    head->next = NULL;


    printf("\nAfter deletion of last node\n");
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }


        return 0;
    }
