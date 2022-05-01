#include <iostream>
using namespace std;

// CODE INCOMPLETE

int main(){
    int n, x, i, temp;
    cout << "\nHow many input items are there? ";
    cin >> n;
    int a[n];
    
    cout << endl;
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 <<": ";
        cin >> a[i];}

    cout << "\nThe input array is: ";
    for(i=0;i<n;i++){cout << a[i] << " ";}

    cout << "\nThe sorted array is: ";
    for (i=1; i<=n; i++){
        if (a[i] <  a[i-1]){
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp; 
        }


        cout << a[i-1] << " ";
    }
    return 0;
} 