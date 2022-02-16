#include <iostream>
using namespace std;

// Daksh Gehlot - N230
int main()
{
    int n; float sum=0, avg;
    cout << "\nHow many elements: ";
    cin >> n;

    float arr[n];
    cout << "\nEnter the elemets: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    cout << "\nThe sum of the elements are: " << sum;
    cout << "\nAverage is: " << avg;
    return 0;
}