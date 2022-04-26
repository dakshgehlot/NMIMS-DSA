#include <iostream>

using namespace std;

#define size 100

void merge(int a[], int, int, int);
void merge_sort(int a[],int, int);
int main()
{
    int arr[size], i, n;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr, 0, n-1);
    cout<<"The sorted array is: "<<endl;
    for(i=0;i<n;i++)
    cout<<" "<<arr[i];
    return 0;
}
void merge(int arr[], int beg, int mid, int end)
{
    int i=beg, j=mid+1, index=beg, temp[size], k;
    while((i<=mid) && (j<=end))
    {
        if(arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
        if(i>mid)
        {
            while(j<=end)
            {
            temp[index] = arr[j];
            j++;
            index++;
            }
        }
        else
        {
            while(i<=mid)
            {
            temp[index] = arr[i];
            i++;
            index++;
            }
        }
    for(k=beg;k<index;k++)
    arr[k] = temp[k];
}
void merge_sort(int arr[], int beg, int end)
{
    int mid;
    if(beg<end)
        {
            mid = (beg+end)/2;
            merge_sort(arr, beg, mid);
            merge_sort(arr, mid+1, end);
            merge(arr, beg, mid, end);
        }
}