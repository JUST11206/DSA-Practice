#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;


};

int main()
{
    int n,val,item;
    int count=0;
    struct node* temp,*head = NULL;
    

    printf("Enter number of nodes to create :");

    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        printf("Enter val %d :",i+1);
        scanf("%d",&val);
        struct node * newNode = (struct node*)malloc(sizeof(struct node));
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
    //count node
    temp = head;
    while(temp != NULL){
        count += 1;
        temp = temp->next;
    }

    printf("count of nodes %d",count);
}