#include <iostream>
using namespace std;

// Daksh Gehlot - N230
int main()
{
    int n, i, min, max;
    cout << "\nHow many input items are there? ";
    cin >> n;
    int a[n];
    
    cout << endl;
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 <<": ";
        cin >> a[i];}

    cout << "\nThe input array is: ";
    for(i=0;i<n;i++){cout << a[i] << " ";}

    max=a[0],min=a[0];
    for(i=0;i<n;i++){
        if (a[i]>max){max=a[i];}
        else if (a[i]<min){min=a[i];}}
    
    cout << "\nThe min and max value from the array is " <<
    min << " and " << max << " respectively.";
        
    return 0;
}