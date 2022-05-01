#include <iostream>
using namespace std;
#define max 5

int Queue[max], front = -1, rear= -1;

void enQueue(){
    if (front == 0 && rear == max - 1){
        cout << "\nOverflow! Max queue limit reached.";
    }
    else if (front == rear + 1){
        cout << "\nOverflow! Max queue limit reached.";
    }
    else{
        if (front == -1 && rear == -1){
            front = rear = 0;
        }
        else if (rear == max - 1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        int val;
        cout << "\nEnter customer ID: ";
        cin >> val;
        Queue[rear] = val;    
    }
}

void deQueue(){
    if (front == -1){
        cout << "\nUnderflow! No customers in queue.";
    }
    else{
        int val = Queue[front];
        cout << "\nCustomer ID cleared: " << val; 
    }

    if (front == rear){
        front = rear = -1;
    }
    else{
        if (front == max - 1){
            front = 0;
        }
        else{
            front++;
        }
    }
}

void displayQueue(){
    int i;
    if (front == -1){
        cout << "\nEmpty queue!";
    }
    else{
        cout << "\nThe queue is: ";
        if (front < rear){
            for (i=front;i<=rear;i++){
                cout << Queue[i] << " ";
            }
        }
        else{
            for (i=front;i<=max-1;i++){
                cout << Queue[i] << " ";
            }
            for (i=0;i<=rear;i++){
                cout << Queue[i] << " ";
            }
        }
    }
}

int main()
{   
    int choice;
    cout << "\nCustomer queue created!"
    "\n\n1. Insert customer ID"
    "\n2. Clear customer ID"
    "\n3. Display customers in queue by their IDs"
    "\n4. Exit";

    do{
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                enQueue();
                break;

            case 2:
                deQueue();
                break;

            case 3:
                displayQueue();
                break;
            
            case 4:
                cout << "\nThank you!";
                break;
                
            default:
                cout << "\nEnter a valid choice!";
                break;
        }    
    } while (choice !=4);
    return 0;
}