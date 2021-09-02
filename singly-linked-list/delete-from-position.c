#include <stdio.h>
#include <stdlib.h>
 
struct node {
 
   int data;
   struct node* next;
 
};
 
//Global declaration of head pointer
struct node* head;
 
 
// Insert function insert a node at the beginning of a linked list
void insert(int data) {
 
   struct node* newNode;
 
   newNode = (struct node*)malloc(sizeof(struct node*));
 
   newNode->data = data;
   newNode->next = head;
 
   head = newNode;
}
 
void deleteNode(int position) {
 
    struct node* temp;
 
    // Pointer p points to head
    struct node* p = head;
 
    int count = 0;
 
    // If linked list is empty
    if (p == NULL) {
       printf(" Linked list is empty ");
       return;
    }
 
    // If first element of linked list is deleted
    if (position == 0) {
 
       head = p->next;
       free(p);
 
    } else {
 
      while (count < position-1 && p != NULL) {
 
          p = p->next;
     }
 
     temp = p->next;
     p->next = temp->next;
 
     free(temp);
 
     head = p;
 
   }
 
}
 
void print(){
 
   struct node* p;
   p = head;
 
   while(p != NULL) {
 
      printf( "%d\n", p->data);
      p = p->next;
 
   }
   printf("\n");
 }
 
int main(void) {
 
   head = NULL;
 
   insert(3);
   insert(7);
   insert(8);
   insert(9);
 
   printf("After insertion of linked list\n");
   print();
 
   // Delete a node from first position
   deleteNode(1);
 
   printf("After deletion of linked list from a given position \n");
   print();
 
   return 0;
}
