// Linked list is a collection of nodes.
// Elements not stored at contagious locations. They are stored at random places.
// Multiple data can be stored in one node. 
// One of the nodes in a list contains the address to another list. That's why they're called as Linked Lists.
// "start" pointer (its a special pointer that stores the address of the first node) points towards the first node of any linked list.
// pointer is used to traverse the list.
// <malloc.h> is used to create and reserve a single block of a node while <calloc.h> is used to insert data to multiple node.

// Application of linked list
// 1. Implementation of stack
// 2. Implementation of queue
// 3. Representation of arithmetic expression (Polymonial)

// Linked Stack

// Algo for pushing item into a stack (linked list  stack)
// (from Sanyam)
 

#include <iostream>
using namespace std;
#include <malloc.h>

struct node{           // Structure is declared and defined.
    int data;
    struct node *next;
};
struct node *start = NULL;  //structure "start" is created and given null value.

struct node *Create_ll(struct node *start){      // Functions that'll be used to insert elements to the list.
    struct node *new_node, *ptr;           // new_node will point to the new node created and ptr will be used to traverse that node.
    int num;
    cout << "\nEnter -1 to end";
    cout << "\nEnter the data: ";
    cin >> num;

    while (num != 0){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> data = num;
        if (start == NULL){
            new_node -> next = NULL;
            start = new_node;              // Address of first node of list.
        }
        else{
            ptr = start;
            while(ptr -> next != NULL);
            ptr -> next = new_node;
            new_node -> next = NULL;
        }
    cout << "\nEnter the data: ";
    cin >> num;
    }
    return start;
}

int main()
{
      
    return 0;
}