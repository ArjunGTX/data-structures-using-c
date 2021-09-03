#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int info;
    struct node* next;
};
 

struct node* last = NULL;
 

void addatlast()
{
    
    int data;
 
    
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
  
    printf("\nEnter data to be inserted : \n");
    scanf("%d", &data);
 
 
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 
  
    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
 

void insertafter()
{

    int data, value;
 
    struct node *temp, *n;
 
    printf("\nEnter number after which"
           " you want to enter number: \n");
    scanf("%d", &value);
    temp = last->next;
 
    do {
 
     
        if (temp->info == value) {
            n = (struct node*)malloc(sizeof(struct node));
 
            printf("\nEnter data to be"
                   " inserted : \n");
            scanf("%d", &data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;
 
           
            if (temp == last)
                last = n;
            break;
        }
        else
            temp = temp->next;
    } while (temp != last->next);
}
 
void viewList()
{
    if (last == NULL)
        printf("\nList is empty\n");
 
    else {
        struct node* temp;
        temp = last->next;
        do {
            printf("\nData = %d",
                   temp->info);
            temp = temp->next;
        } while (temp != last->next);
    }
}
 
int main()
{
    addatlast();
    addatlast();
    addatlast();
 
    insertafter();

    viewList();
 
    return 0;
}