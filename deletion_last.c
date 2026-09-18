#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
    
};

int main()
{
    struct node * firstNode = malloc(sizeof(struct node));
    struct node * secondNode = malloc(sizeof(struct node));
    struct node * thirdNode = malloc(sizeof(struct node));

    //data filled

    firstNode->data = 100;
    secondNode->data = 200;
    thirdNode->data = 300;

    //connect each other

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = NULL;
    

    //intialize the pointer
    struct node * head=NULL;
    struct node*temp,*del;

    //head pointer is point to firstNode
    head = firstNode;

    //print
    printf("Before deletion Singly Linked List :\n");
    temp = head;
    while(temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    printf("NULL\n");


    //Now deletion at the last node in singly linked list

    if(head == NULL){
        printf("Empty Linked list!");
    }

        if(head->next == NULL) { //only one node

            free(head);
        }
        else{
            temp = head;
    while(temp->next->next != NULL)  //for reaching last-1 nodes
        {
            temp = temp->next;
        }
     //now arrange last-1 node 
            del = temp->next;
            temp->next = NULL;
            free(del); //or taking one more pointer *ptr 

            
            
        
    }
        printf("After deletion last node Singly Linked List :\n");
     temp = head;
    while(temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    printf("NULL");


}


