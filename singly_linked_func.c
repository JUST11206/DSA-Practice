#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createLL(int n){
    int value;
    struct node *head = NULL; // Fixed: head must be a pointer
    struct node *temp = NULL;

    for (int i = 0; i < n; i++) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        
        if (newNode == NULL) {
            printf("Overflow !\n");
            exit(0);
        }
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        // Data and next pointer should be assigned for EVERY new node
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode; // If list is empty, make this the head
        } else {
            // Otherwise, traverse to the last node
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode; // Attach the new node at the end
        }
    }
    return head;
}

int main() {
    printf("Welcome to first create LL function !\n");
    int n;
    printf("Enter how many nodes you want to create: ");
    scanf("%d", &n);
    // Function calling
    struct node *head = createLL(n);
    
    // Display the list to verify (Fixed: temp must be a pointer)
    struct node *temp = head; 
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}