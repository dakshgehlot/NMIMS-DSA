#include <iostream>
using namespace std;
#include <string.h>

// Daksh Gehlot - N230
int main()
{
    int click[100], count=1, i=0, x=0;
    char choice;
    cout << string(20, '*');
    cout << "\nA Click Counter\n";
    cout << string(20, '*');
    cout << "\nPress P to increment the counter."
    "\nPress R to reset the counter."
    "\nPress E to exit the counter."
    "\n\nCurrent count: 0\n";
    cout << "\nEnter your choice: ";
    cin >> choice;

    while(true){
        if (choice == 'P' || choice == 'p'){
            click[x] = count++;
            cout << "Current count: " << click[x] << endl;
            x++;
        }
        else if (choice == 'R' || choice == 'r'){
            cout << "Last count: " << click[x-1] << endl;
            for(i=0;i<x;i++){
                click[i] = 0;}
            x=i=0;
            cout << "Counter reset to " << click[i] << endl;
        }
        else if (choice == 'E' || choice == 'e'){break;}
        else{
            cout << "Enter a valid choice";
        }
        
        cout << "Enter new choice: ";
        cin >> choice;        
    }
    return 0;
}