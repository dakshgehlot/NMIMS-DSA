#include <iostream>
using namespace std;

// CODE INCOMPLETE

int findMin(int arr[], int k, int n, int pos){
    int min = arr[k], pos = k;
    for(int i=k+1;i<=n;i++){
        if(min > arr[i]){
            min = arr[i];
            return min;
        }
    }
}

int main()
{
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

    for(i=0;i<n-1;i++){
        int min = i;
        
        
    }
    return 0;
}