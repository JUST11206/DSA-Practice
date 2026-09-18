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

     
    int n,item;
    struct node* head = NULL;
    struct node* temp;
    printf("Enter No of Nodes :");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        {
            printf("Enter value %d :",i+1);
            scanf("%d",&item);
            
            struct node * newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = item;
            newNode->prev = NULL;
            newNode->next = NULL;


            if(head == NULL)
            {
                head = newNode;
            }
            else{
                temp = head;
                 while(temp->next != NULL)
                    {
                        temp = temp->next;
                    }
                
                temp->next = newNode;
            }

        }
    //Now traverse the doubly linked list 

    printf("Before Insertion Doubly Linked List --> \n");
    
    temp = head;

    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
    

    //Now insertion at the begin
    int first_val;
    printf("\nEnter value to insertion at the begin :");
    scanf("%d",&first_val);
    
    struct node * first = (struct node*)malloc(sizeof(struct node));
    first->data = first_val;
    first->prev = NULL;
    first->next = NULL;


    if(head==NULL)
    {
        head = first;
    }
    else{
    temp = head;
    temp->prev = first;
    first->next = temp;
    head = first;
    }
    
    printf("After Insertion at Begin Doubly Linked List --> \n");
    
    temp = head;

    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");



    //insertion at the last 

    int last_val;
    printf("Enter value to insertion at the  Last :");
    scanf("%d",&last_val);

    struct node *last = (struct node*)malloc(sizeof(struct node));
    last->data = last_val;
    last->prev = NULL;
    last->next = NULL;

    if(head == NULL){
        head = last;
    }

    else{
        temp = head;
        while(temp->next != NULL )
            {
                temp = temp->next;
            }
        temp->next = last;
    }

    


    printf("After Insertion at last  Doubly Linked List --> \n");
    
    temp = head;

    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    

    

    
    return 0;
}