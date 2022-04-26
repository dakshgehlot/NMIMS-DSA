#include <iostream>

using namespace std;

#define size 10
void insertion_sort(int arr[], int n);
int main()
    {
        int arr[size], i, n;
        cout<<"Enter the number of elements in the array: "<<endl;
        cin>>n;
        cout<<"Enter the elements of the array: "<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertion_sort(arr, n);
        cout<<"The sorted array is:  "<<endl;
        for(i=0;i<n;i++)
        cout<<" "<<arr[i];
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