#include <iostream>
#include <conio.h>
using namespace std;
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
int queue[SIZE], front = -1, rear = -1;
int main()
{
    int value, choice;

    while (1)
    {
        cout << "\n\n***** MENU *****\n";
        cout << "1. Insertion\n2. Deletion\n3. Display\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be insert: ";
            cin >> value;
            enQueue(value);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        default:
            cout << "\nWrong selection!!! Try again!!!";
        }
    }
    return 0;
}
void enQueue(int value)
{
    if (rear == SIZE - 1)
        cout << "\nQueue is Full!!! Insertion is not possible!!!";
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        cout << "\nInsertion success!!!";
    }
}
void deQueue()
{
    if (front == rear)
        cout << "\nQueue is Empty!!! Deletion is not possible!!!";
    else
    {
        cout << "\nDeleted : %d", queue[front];
        front++;
        if (front == rear)
            front = rear = -1;
    }
}
void display()
{
    if (rear == -1)
        cout << "\nQueue is Empty!!!";
    else
    {
        int i;
        cout << "\nQueue elements are:\n";
        for (i = front; i <= rear; i++)
            cout << queue[i] << " ";
    }
}