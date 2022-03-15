// Representation of arithmetic expression (polynomial)
// Performing addition and subtraction on polynomials using LL

#include <iostream>
using namespace std;
#include <malloc.h>
#include <conio.h>

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
struct node *add_poly(struct node *, struct node *, struct node *);
struct node *sub_poly(struct node *, struct node *, struct node *);
struct node *add_node(struct node *, int, int);

int main()
{
    int option;
    do
    {
        cout << "1. Enter the first polynomial" << endl;
        cout << "2. Display first polyomial" << endl;
        cout << "3. Enter the second polynomial" << endl;
        cout << "4. Display second polynomial" << endl;
        cout << "5. Add the polynomials" << endl;
        cout << "6. Display the result" << endl;
        cout << "7. Subract Polynomials" << endl;
        cout << "8. Display the result" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: " << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            start1 = create_poly(start1);
            break;
        case 2:
            start1 = display_poly(start1);
            break;
        case 3:
            start2 = create_poly(start2);
            break;
        case 4: 
            start2 = display_poly(start2);
            break;
        case 5:
            start3 = add_poly(start1, start2, start3);
            break;
        case 6:
            start3 = display_poly(start3);
            break;
        case 7:
            start4 = sub_poly(start1, start2, start3);
            break;
        case 8:
            start4 = display_poly(start4);
            break;
        }
    }while (option != 9);
    getch();
    return 0;
}

struct node *create_poly(struct node *start)
{
    struct node *new_node, *ptr;
    int c, p;
    cout << "Enter coefficient: " << endl;
    cin >> c;
    cout << "Enter power: " << endl;
    cin >> p;

    while (c != 1)
    {
        if(start == NULL)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node -> coeff = c;
            new_node -> pow = p;
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while(ptr -> next != NULL)
                ptr = ptr -> next;
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node -> coeff = c;
            new_node -> pow = p;
            new_node -> next = NULL;
            ptr -> next = new_node;
        }
        cout << "Enter coefficient: " << endl;
        cin >> c;
        cout << "Enter power: " << endl;
        cin >> p;
    }
    return 0;
}

struct node *display_poly(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr -> next != NULL)
    {
        cout << ptr -> coeff << ptr -> pow << endl;
        ptr = ptr -> next;
    }
    return start;
}

struct node *add_poly(struct node *start1, struct node *start2, struct node *start3)
{
    struct node *ptr1, *ptr2;
    int sum_coeff, p;
    ptr1 = start1, ptr2 = start2;
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1 -> pow == ptr2 -> pow)
        {
            sum_coeff = ptr1 -> coeff + ptr2 -> coeff;
            start3 = add_node(start3, sum_coeff, ptr1 -> pow);
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next;
        }
        else if(ptr1 -> pow > ptr2 -> pow)
        {
            start3 = add_node(start3, ptr1 -> coeff, ptr1 -> pow);
            ptr1 = ptr1 -> next;
        }
        else if(ptr1 -> pow < ptr2 -> pow)
        {
            start3 = add_node(start3, ptr2 -> coeff, ptr2 -> pow);
            ptr2 = ptr2 -> next;
        }
    }
}