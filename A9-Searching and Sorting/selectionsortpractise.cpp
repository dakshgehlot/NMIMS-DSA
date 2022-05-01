#include <iostream>
using namespace std;

int main()
{
    int size, i, j;
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "\nEnter the elemetnts: ";
    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "\nThe inserted array is: ";
    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "\nThe sorted array is: ";
    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}