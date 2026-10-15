//Tree first program 
#include <stdio.h>
#include <stdlib.h>
#define p printf
#define start() main()
#define i int
#define s struct

s node{
    i data;
    s node *right;
    s node *left;
};
//using preorder travese
   void traverseP(s node * root){
    if(root == NULL){
        return;
    }
    p("\n%d",root->data);
    traverseP(root->left);
    traverseP(root->right);
}


void start(){
    p("This is Binary Tree Program!\n");
    s node *root = malloc(sizeof(s node));
    s node *c1 = malloc(sizeof(s node));
    s node *c2 = malloc(sizeof(s node));
    
    //data filled
    root->data = 10;
    c1->data = 5;
    c2->data = 15;

    //connection left
    root->left = c1;
    c1->left = NULL;
    c2->left = NULL;

    //connection right
    root->right = c2;
    c1->right = NULL;
    c2->right = NULL;

 
    traverseP(root);
    // printf("Root ->%d",root->data);
    // printf("\nChild 1 :%d",c1->data);
    // printf("\nChild 2 :%d",c2->data);
    

}