#include <iostream>
using namespace std;

// Daksh Gehlot - N230
int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);
int main() 
    {
        int arr[10], i, n;
        cout<<"\nEnter the number of elements in the array: ";
        cin>>n;
        cout<<"\nEnter the elements of the array: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selection_sort(arr, n);
        cout<<"\nThe sorted array is: "<<endl;
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        return 0;
    }
int smallest(int arr[], int k, int n)
{
    int pos = k, small=arr[k], i;
    for(i=k+1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            pos = i;
        }
    }
return pos;
}
void selection_sort(int arr[],int n)
{
    int k, pos, temp;
    for(k=0;k<n;k++)
    {
        pos = smallest(arr, k, n);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
        
    }
}