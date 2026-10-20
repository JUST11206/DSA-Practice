#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node *createTree(int value){
    struct node *root = malloc(sizeof(struct node));
    root->right = NULL;
    root->left = NULL;
    root->data = value;
    return root;
}

void display(struct node *root){
    //preorder
    if(root == NULL){
        return;
    }
    printf("%d ",root->data);
    printf("\n");
    display(root->left);
    display(root->right);

}

struct node *insertTree(struct node *root,int item){
    struct node *newNode = malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Overflow");
        return 0;
    }
    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;

    if(root == NULL){
        root = newNode;
    } 
    else{
        
        if(item < root->data){
            root->left = insertTree(root->left,item);
        }
        else if(item > root->data){
            root->right = insertTree(root->right,item);
        }
        else{
            printf("Both are equal!");
        }

    }
return root;
}
int main()
{
    struct node *tree = NULL;
    while(true){
    printf("Welcome to Tree Binary Program!\n");
    printf("1. Create Tree\n");
    printf("2. Insert Element\n");
    printf("3. Display\n");
    printf("4 .Exit\n");

    int option,value;
    printf("Enter option :");
    scanf("%d",&option);
    if(option == 1){
        printf("Enter value :");
        scanf("%d",&value);
        tree =  createTree(value);
        display(tree);
    }
    else if(option == 2){
        printf("Enter value :");
        scanf("%d",&value);
        insertTree(tree,value);
        display(tree);
    }
    else if(option == 3){
        display(tree);
    }
    else if(option >= 4){
        break;
    }
    else{
        printf("something\n"); 
    }
    }
}