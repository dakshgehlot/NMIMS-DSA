#include <iostream>
using namespace std;
#define max 5

int Queue[max], front = -1, rear= -1;

void enQueue(){
    if (front == 0 && rear == max - 1){
        cout << "\nOverflow!";
    }
    else if (front == rear + 1){
        cout << "\nOverflow!";
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
        cout << "\nEnter the value to be inserted: ";
        cin >> val;
        Queue[rear] = val;    
    }
}

void dQueue(){
    if (front == -1 || front > rear){
        cout << "\nUnderflow!";
    }
    else{
        int val = Queue[front];
        cout << "\nDeleted element: " << val;
        front += 1;   
    }
}

void displayQueue(){
    if (front == -1 || front > rear){
        cout << "\nEmpty list!";
    }
    else{
        cout << "\nThe queue is: ";
        for (int i=front;i<=rear;i++){
            cout << Queue[i] << " ";
        }
    }
}

int main()
{   
    int choice;
    cout << "\nQueue created!"
    "\n\n1. Insert Element"
    "\n2. Delete Element"
    "\n3. Display Queue"
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
                dQueue();
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