#include <iostream>
using namespace std;

// Daksh Gehlot - N230
int main()
{   
    int n, x, i, pos = -1;
    cout << "\nHow many input items are there? ";
    cin >> n;
    int a[n];
    
    cout << endl;
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 <<": ";
        cin >> a[i];}

    cout << "\nThe input array is: ";
    for(i=0;i<n;i++){cout << a[i] << " ";}

    cout << "\n\nWhich element do you want to search for? ";
    cin >> x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            pos = i;
            cout << "\nValue found! Its index is: " << pos;
            break;
        }
    }

    if (pos == -1){
        cout << "\nValue not present!";
    }

    return 0;
}