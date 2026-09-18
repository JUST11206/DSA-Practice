#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
    
};

int main()
{
    
    int n,val;
    struct node * head=NULL;
    struct node*temp,*del;
    
    printf("Enter number of nodes :");
    scanf("%d",&n);

        for(int i=0;i<n;i++){
            printf("Enter value %d :",i+1);
            scanf("%d",&val);

        struct node * newNode = malloc(sizeof(struct node));
        newNode->data = val;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

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
    
     temp = head;
    while(temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    printf("NULL");

    return 0;
    
}
