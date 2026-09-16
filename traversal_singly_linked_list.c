#include <stdio.h>
#include <stdlib.h>

struct node{int data;
struct node * next;
};

int main(){
    int n,item;
    struct node *head = NULL;
    struct node *temp;

    printf("Enter the number of nodes to create: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        struct node* newNode  = (struct node*)malloc(sizeof(struct node));
        printf("Enter value for node %d: ", i+1);
        scanf("%d",&item);
        newNode->data = item;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }
        else{
            temp = head;
            while(temp->next!= NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    //display or traversal node 
    printf("Your singly linked list here -->\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
    printf("NULL");

   return 0;
}