#include <iostream>
using namespace std;
#define max 5

int stack[max], top = -1;

void push(){
    int val;

    if (top = max - 1){
        cout << "Stack Overflow!";
    }
    else{
    cout << "Enter the value to be inserted: ";
    cin >> val;
    top++;
    stack[top] = val;
    }
}

void pop(){
    if (top == -1){
        cout << "Stack Underflow!";
    }
    else{
        cout << "Value deleted: " << stack[top];
        top--;
    }
}

void peek(){
    if (top == -1){
        cout << "Stack Underflow!";
    }
    else{
        cout << "Top-most value is: " << stack[top];
    }
}

int main()
{
    
    return 0;
}