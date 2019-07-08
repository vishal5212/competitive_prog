#include<stdio.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode( int data){
    struct node *node = (struct node *)malloc(sizeof(struct node));
    
    
    node->data = data;
    node->right = NULL;
    node->left = NULL;
    
    return(node);
}

int main(){
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    
    printf("%d",root->left->left->data);
    getchar();
    return 0;
}

