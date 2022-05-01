#include <iostream>
using namespace std;

struct node{
    int coeff;
    int pow;
    struct node *next;
};

struct node *start1 = NULL;
struct node *start2 = NULL;
struct node *start3 = NULL;
struct node *start4 = NULL;
struct node *create_poly(struct node *);
struct node *display_poly(struct node *);
struct node *add_poly(struct node *);
struct node *sub_poly(struct node *);
struct node *add_node(struct node *, int, int);

struct node *create_poly(struct node *start){
    struct node *new_node, *ptr;

    int c, p;
    cout << "\nEnter the coeff: ";
    cin >> c;
    cout << "\nEnter the pow: ";
    cin >> p;

    while (c != -1){
        if(start == NULL){
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node -> coeff = c;
            new_node -> pow = p;
            new_node -> next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while (ptr -> next != NULL){
                ptr = ptr -> next;
            }
            new_node -> coeff = c;
            new_node -> pow = p;
            new_node -> next = NULL;
            ptr -> next = new_node;
        }

        cout << "Enter coefficient: ";
        cin >> c;
        cout << "Enter power: ";
        cin >> p;
    }
    return start;
}

struct node *display_poly(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr != NULL){
        cout << ptr -> coeff << "x" << "^" << ptr -> pow;
        ptr = ptr -> next;
        if (ptr != NULL){
            cout << " + ";
        }
        cout << endl;
        return start;
    }
}

struct node *add_poly(struct node *start1, struct node *start2, struct node *start3){
    struct node *ptr1, *ptr2;
    int sum_coeff, p;

    ptr1 = start1, ptr2 = start2;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 -> pow == ptr2 -> pow){
            sum_coeff = ptr1 -> coeff + ptr2 -> coeff;
            start3 = add_node(start3, sum_coeff, ptr1 -> pow);
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next;
        }
        else if(ptr1 -> pow > ptr2 -> pow){
            start3 = add_node(start3, ptr1 -> coeff, ptr1 -> pow);
            ptr1 = ptr1 -> next;
        }
        else if(ptr2 -> pow > ptr1 -> pow){
            start3 = add_node(start3, ptr2 -> coeff, ptr2 -> pow);
            ptr2 = ptr2 -> next;
        }
    }
    if (ptr1 == NULL){
        while(ptr2 != NULL){
            start3 = add_node(start3, ptr2 -> coeff, ptr2 -> pow);
            ptr2 = ptr2 -> next;
        }
    }
    if(ptr2 == NULL){
        while(ptr1 == NULL){
            start3 = add_node(start3, ptr1 -> coeff, ptr1 -> pow);
            ptr1 = ptr1 -> next;
        }
    }
    return start3;
}

struct node *add_node(struct node *start, int coeff, int pow){
    struct node *new_node, *ptr;
    if(start == NULL){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> coeff = coeff;
        new_node -> pow = pow;
        new_node -> next = NULL;
        start = new_node;
    }
    else{
        ptr = start;
        while(ptr -> next != NULL){
            ptr = ptr -> next;
        }
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> coeff = coeff;
        new_node -> pow = pow;
        new_node -> next = NULL;
        ptr -> next = new_node;
    }
    return start;
}