#include <iostream>
using namespace std;
#include <malloc.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_after(struct node*);
struct node *insert_before(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_before(struct node *);
struct node *delete_after(struct node);

struct node *create_ll(struct node *start){
    int val;
    struct node *new_node, *ptr;
    cout << "\nEnter -1 to end";
    cout << "Enter the value: ";
    cin >> val;

    while(val == -1){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> data = val;

        if(start == NULL){
            new_node -> next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr -> next != NULL){
                ptr = ptr -> next;
            }
            ptr -> next = new_node;
            new_node -> next = NULL;
        }

        cout << "\nEnter the data: ";
        cin >> val;
    }
    return start;
}

struct node *insert_beg(struct node *start){
    struct node *new_node;
    int val;
    cout << "Enter the data: ";
    cin >> val;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = val;
    new_node -> next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start){
    struct node *new_node, *ptr;
    int val;
    cout << "\nEnter the val: ";
    cin >> val;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = val;

    ptr = start;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    new_node -> next = NULL;
    ptr -> next = new_node;
    return start;
}

struct node *insert_before(struct node *start){
    struct node *new_node, *ptr, *preptr;
    int data, val;
    cout << "\nEnter the val: ";
    cin >> val;
    cout << "\nEnter the value before which the data is to be inserted: ";
    cin >> val;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    preptr = ptr = start;

    while(ptr -> data != val){
        preptr = ptr;
        ptr = ptr -> next;
    }

    preptr -> next = new_node;
    new_node -> next = ptr;
    return start;
}

struct node *insert_after(struct node *start){
    struct node *preptr, *new_node, *ptr;
    int data, val;

    cout << "\nEnter the data: ";
    cin >> data;
    cout << "\nEnter the value after which the data has to be inserted: ";
    cin >> val;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;

    preptr = ptr = start;

    while(preptr -> data != val){
        preptr = ptr;
        ptr = ptr -> next;
    }

    preptr -> next = new_node;
    new_node -> next = ptr;
    return start;
}

struct node *delete_beg(struct node *start){
    struct node *ptr;
    ptr = start;
    start = start -> next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start){
    struct node *ptr, *preptr;
    ptr = start;
    while (ptr -> next != NULL){
        preptr = ptr;
        ptr = ptr -> next;
    }

    preptr -> next = NULL;
    free(ptr);
    return start;
}

struct node *delete_after(struct node *start){
    struct node *ptr, *preptr;
    int val;
    cout << "\nEnter the value after which the node has to be deleted: ";
    cin >> val;

    preptr = ptr = start;
    while(preptr -> data != val){
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next = ptr -> next;
    free(ptr);
    return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while (ptr != NULL){
        cout << ptr -> data << " ";
        ptr = ptr -> next;
    }
    return start;
}