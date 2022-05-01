#include <iostream>
using namespace std;

// Daksh Gehlot - N230
int insertIntoArray(int newArr[], int x){
    int num;
    cout << "\nEnter the element to add: ";
    cin >> num;
    newArr[x] = num;
    cout << "\nThe new array is: ";
    for(int i=0;i<x+1;i++){
        cout << newArr[i] << " ";
    }
}

int delFromArray(int newArr[], int x){
    int num;
    cout << "\nEnter the element to delete: ";
    cin >> num;

    for(int i=0;i<x+1;i++){
        if(newArr[i] != num){
            cout << newArr[i] << " ";
        }
    }
}

int main()
{
    int n, i;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    int arr[n+1];
    cout << "\nEnter the elemets: ";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "\nThe entered array is: ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    insertIntoArray(arr, n);
    delFromArray(arr, n);
    return 0;
}