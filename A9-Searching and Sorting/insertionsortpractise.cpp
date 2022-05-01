#include <iostream>
using namespace std;


void insertion_sort(int arr[], int n);
int main()
{
    int size, i;

    cout << "\nEnter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "\nEnter the elements: ";
    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "\nThe inserted array is: ";
    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    insertion_sort(arr, size);

    cout << "\nThe sorted array is: ";
    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

void insertion_sort(int arr[], int n){
    int i, j, current;

    for(i=1;i<n;i++){
        current = arr[i];
        j = i - 1;

        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
    }
}