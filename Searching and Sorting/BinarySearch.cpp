#include <iostream>
using namespace std;

int main(){
    int n, val, i, pos = -1;
    cout << "\nHow many input items are there? ";
    cin >> n;
    int a[n];
    
    cout << endl;
    for(i=0;i<n;i++){
        cout << "Enter element " << i+1 <<": ";
        cin >> a[i];}

    cout << "\nThe input array is: ";
    for(i=0;i<n;i++){cout << a[i] << " ";}

    int beg = 0, end = n, mid = 0;

    cout << "\nEnter the element you want to search for: ";
    cin >> val;

    while (beg <= end){
        mid = (beg + end) / 2;

        if (a[mid] == val){
            pos = mid;
            cout << "\nValue found! Its index is: " << pos;
            break;
        }
        else if (a[mid] > val){
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }

    if (pos == -1){
        cout << "\nValue not present!";
    }
    return 0;
}
// Hello world!
// Hello