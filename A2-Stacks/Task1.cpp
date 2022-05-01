#include <iostream>
using namespace std;
#define max 10

// Daksh Gehlot - N230
int main()
{
    int n, num, stack[max], choice, top = -1;

    do{
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit"
        "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of values: ";
            cin >> n;
            
            cout << "Enter the values to insert: ";
            for(int i=0;i<n;i++){
                cin >> num;
                if (top == max-1){
                    cout << "\nStack Overflow";
                } else {
                    top++;
                    stack[top] = num;
                }
            }
            break;

        case 2:
            if(top == -1){
                cout << "\nStack Underflow!";
            } else {
                cout << "\nValue deleted: " << stack[top];
                top--;
            }
            break;
        
        case 3:
            if(top == -1){
                cout << "\nStack is empty";
            } else {
                cout << "\nTop most value is: " << stack[top];
            }
            break;

        case 4:
            if(top == -1){
                cout << "\nStack is empty";
            } else {
                for(int i=top;i>=0;i--){
                    cout << stack[i] << endl;
                }
            }
            break;

        case 5:
            break;

        default:
            cout << "\nEnter a valid choice!";
        }
    } while (choice!=5);
    return 0;
}