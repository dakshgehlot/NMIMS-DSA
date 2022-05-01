#include <iostream>
using namespace std;
#define max 5

int queue[max], front = -1, rear = -1;

void enqueue(){
    if(rear = max - 1){
        cout << "\nOverflow!";
    }
    else{
        if(front == -1 && rear == -1){
            front = rear = 0;
        }
        else{
            rear += 1;
        }
        int val;
        cout << "Enter the value: ";
        cin >> val;
        queue[rear] = val;
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        cout << "\nUnderflow";
    }
    else{
        int val = queue[front];
        cout << "\nDeleted element: " << val;
        front += 1;
    }
}

void displayqueue(){
    if(front == -1 || front > rear){
        cout << "\nEmpty list!";
    }
    else{
        cout << "\nThe queue is:";
        for(int i = front; i <= rear; i++){
            cout << queue[i] << " ";
        }
    }
}