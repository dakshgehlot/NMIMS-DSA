#include <iostream>

using namespace std;

#include<conio.h>
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE], top = -1;
int main()
{
 int value, choice;
 while(1){
 cout<<"\n\n***** MENU *****\n";
 cout<<"1. Push\n2. Pop\n3. Display\n4. Exit";
 cout<<"\nEnter your choice: ";
 cin>>choice;
 switch(choice)
 {
 case 1: cout<<"Enter the value to be insert: ";
cin>>value;
push(value);
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: cout<<"\nWrong selection!!! Try again!!!";
 }
 }
 return 0;
}
void push(int value)
{
 if(top == SIZE-1)
 cout<<"\nStack is Full!!! Insertion is not possible!!!";
 else
 {
 top++;
 stack[top] = value;
 cout<<"\nInsertion success!!!";
 }
}
void pop()
{
 if(top == -1)
 cout<<"\nStack is Empty!!! Deletion is not possible!!!";
 else
 {
 cout<<"\nDeleted :"<<stack[top];
 top--;
 }
 }
void display()
{
 if(top == -1)
 cout<<"\nStack is Empty!!!";
 else
 {
 int i;
 cout<<"\nStack elements are:\n";
 for(i=top; i>=0; i--)
 cout<<stack[i]<<endl;;
 }
}
