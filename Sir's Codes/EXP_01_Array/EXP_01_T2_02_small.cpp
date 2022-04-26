#include <iostream>
using namespace std;
int main()
{
    int i, n, arr[20], small, pos;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    small = arr[0];
    pos =0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            pos = i;
        }
    }
    cout<<"The smallest element is : "<<small<<endl;
    cout<<"The position of the smallest element in the array is : "<<pos<<endl;
    return 0;
}