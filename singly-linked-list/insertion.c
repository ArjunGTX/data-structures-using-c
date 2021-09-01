#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void insertStart(struct Node** head, int data){

  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = *head;

  *head = newNode; 
}

void display(struct Node* node){

  while(node!=NULL)
  {
    printf("%d ",node->data);
    node = node->next;
  }
  printf("\n");
}

int main()
{
  struct Node* head = NULL;

 
  insertStart(&head,12);
  insertStart(&head,16);
  insertStart(&head,20);


 
 display(head); 
 return 0; 
}