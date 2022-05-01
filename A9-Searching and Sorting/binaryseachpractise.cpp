#include <iostream>
using namespace std;

int main()
{
    int size, pos = -1, i, val;

    cout << "\nEnter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "\nEnter the array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nThe inserted array is: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the element to be searched: ";
    cin >> val;

    int beg = 0, end = size, mid = 0;
    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == val)
        {
            pos = mid;
            cout << "\nElement found! Its index is: " << pos;
            break;
        }
        else if (arr[mid] > val)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    if (pos == -1)
    {
        cout << "\nValue not found!";
    }
}