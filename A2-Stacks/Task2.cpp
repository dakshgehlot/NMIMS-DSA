#include <iostream>
using namespace std;

// Daksh Gehlot - N230
class Stack{
    int stack[10], top=-1;
public:
    int pushBrace(int val){
        top++;
        stack[top] = val;
    }
    int popBrace(){
        top--;
    }
    int isEmpty(){
        if(top <= -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack stackItem;
    char brace[30];

    cout << "\nEnter braces to check: ";
    cin >> brace;

    for(int i=0;i<30;i++){
        if (brace[i]=='(' || brace[i]=='[' || brace[i]=='{'){
            stackItem.pushBrace(brace[i]);
        }
        else if (brace[i]==')' || brace[i]==']' || brace[i]=='}'){
            stackItem.popBrace();
        }
        else
            continue;
    }

    if(stackItem.isEmpty()){
        cout << "\nThe braces are balanced!";
    }
    else{
        cout << "\nThe braces are imbalanced!";
    }
    return 0;
}