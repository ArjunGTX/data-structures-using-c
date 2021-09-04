#include <stdio.h>
#include <stdlib.h>


/*
 * Basic structure of Node
 */
struct node {
    int data;
    struct node * next;
}*head;


/*
 * Functions used in this program
 */
void createList(int n);
void displayList();


int main()
{
    int n, data, choice=1;

    head = NULL;

    /*
     * Run forever until user chooses 0
     */
    while(choice != 0)
    {
        printf("============================================\n");
        printf("CIRCULAR LINKED LIST PROGRAM\n");
        printf("============================================\n");
        printf("1. Create List\n");
        printf("2. Display list\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                displayList();
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-2");
        }

        printf("\n\n\n\n\n");
    }

    return 0;
}


/**
 * Creates a circular linked list of n nodes.
 * @n Number of nodes to be created
 */
void createList(int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1)
    {
        /*
         * Creates and links the head node
         */
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;

        /*
         * Creates and links rest of the n-1 nodes
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            // Link the previous node with newly created node
            prevNode->next = newNode;

            // Move the previous node ahead
            prevNode = newNode;
        }

        // Link the last node with first node
        prevNode->next = head;

        printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n");
    }
}


/**
 * Display the content of the list
 */
void displayList()
{
    struct node *current;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        current = head;
        printf("DATA IN THE LIST:\n");

        do {
            printf("Data %d = %d\n", n, current->data);

            current = current->next;
            n++;
        }while(current != head);
    }
}
Output
============================================
CIRCULAR LINKED LIST PROGRAM
============================================
1. Create List
2. Display list
0. Exit
--------------------------------------------
Enter your choice : 1
Enter the total number of nodes in list: 5
Enter data of 1 node: 10
Enter data of 2 node: 20
Enter data of 3 node: 30
Enter data of 4 node: 40
Enter data of 5 node: 50

CIRCULAR LINKED LIST CREATED SUCCESSFULLY





============================================
CIRCULAR LINKED LIST PROGRAM
============================================
1. Create List
2. Display list
0. Exit
--------------------------------------------
Enter your choice : 2
DATA IN THE LIST:
Data 1 = 10
Data 2 = 20
Data 3 = 30
Data 4 = 40
Data 5 = 50





============================================
CIRCULAR LINKED LIST PROGRAM
============================================
1. Create List
2. Display list
0. Exit
--------------------------------------------
Enter your choice : 0
Happy coding 😉

About Pankaj
Pankaj Prakash is the founder, editor and blogger at Codeforwin. He loves to learn new techs and write programming articles especially for beginners. He works at Vasudhaika Software Sols. as a Software Design Engineer and manages Codeforwin. In short Pankaj is Web developer, Blogger, Learner, Tech and Music lover.

Follow on: Twitter | Google | Website or View all posts by Pankaj

Post navigation
←
Previous
Next
→
Comments and discussion
Have a doubt, write here. I will help my best.
Before commenting you must escape your source code before commenting. Paste your source code inside
<pre><code> ----Your Source Code---- </code></pre>

 

 
Data Structures Tutorials
Singly Linked List
Doubly Linked List
Circular Linked List
Introduction
Cr
