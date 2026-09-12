#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node * next;
};

int main(){
    //Initialize the nodes or say variable/pointer declare
    struct node * start;
    struct node *first;
    struct node *second;

    //insert the nodes in linked list or memory allocation

    start = (struct node *) malloc(sizeof(struct node));
    first =(struct node*) malloc(sizeof(struct node));
    second =(struct node*) malloc(sizeof(struct node));


    //Filled data and next pointer of noder or main logic of linked list

    start->data = 10;
    start->next = first;
    first->data = 20;
    first->next =second;
    second->data = 30;
    second->next = NULL;


    //Accessing linked list 
    printf("%d \n",start->data);
    printf("%d \n",first->data);
    printf("%d \n",second->data);
    
    return 0;
}