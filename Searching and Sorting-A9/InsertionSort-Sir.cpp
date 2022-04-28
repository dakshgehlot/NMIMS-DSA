#include <iostream>
using namespace std;
#define size 10

// Daksh Gehlot - N230
void insertion_sort(int arr[], int n);
int main()
    {
        int arr[size], i, n;
        cout<<"\nEnter the number of elements in the array: ";
        cin>>n;
        cout<<"\nEnter the elements of the array: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertion_sort(arr, n);
        cout<<"\nThe sorted array is:  "<<endl;
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        return 0;
    }
void insertion_sort(int arr[], int n)
{
    int i, j, temp;
        for(i=1;i<n;i++)
        {
            temp = arr[i];
            j = i-1;
            while((temp < arr[j]) && (j>=0))
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
}