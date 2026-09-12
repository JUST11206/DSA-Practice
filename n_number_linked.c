// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    
};


int main() {
    // Write C code here

    int n,value;
    struct node *head = NULL , *newnode , *temp;

    printf("Enter number of nodes:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter value: %d:",i+1);
        scanf("%d", &value);
        
        newnode->data = value;
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

        //Display Linked list
        temp = head;
        while(temp !=NULL){
            printf("%d->",temp->data);
            temp = temp->next;
        }
    printf("NULL");
    

    return 0;
}