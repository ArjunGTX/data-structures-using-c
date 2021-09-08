#include <stdio.h>
 
struct node {
    int data;
    struct node *left;
    struct node *right;
};
 
struct node* getNewNode(int data) {
  /* dynamically allocate memory for a new node */
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
  
  /* populate data in new Node */
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
   
  return newNode;
}
 
/*
This function returns below 
            1
           / \
         2    3
        / \  / \
       4  5 6  7
      /
     8
*/
struct node* generateBTree(){
    // Root Node
    struct node* root =  getNewNode(1);
  
    root->left = getNewNode(2);
    root->right = getNewNode(3);
  
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(5);
    root->right->left = getNewNode(6);
    root->right->right = getNewNode(7);
  
    root->left->left->left = getNewNode(8);
     
    return root;
}
 
/*
 First recursively deletes left and right subtree 
 then delete root node 
*/
void deleteTree(struct node *root){
    if(root == NULL)
        return;
    /* Delete Left sub-tree */
    deleteTree(root->left);
    /* Delete right sub-tree */
    deleteTree(root->right);
     
    /* At last, delete root node */
    printf("Deleteing Node : %d\n", root->data);
    free(root);
     
    return;
}
 
int main() {
    struct node *root = generateBTree();    
     
    /* Deleting tree */
    deleteTree(root);
     
    getchar();
    return 0; 
