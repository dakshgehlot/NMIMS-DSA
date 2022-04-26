#include <iostream>
using namespace std;
int main()
{
    int i, n, arr[20], large, pos;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    large = arr[0];
    pos =0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
            pos = i;
        }
    }
    cout<<"The Largest element is : "<<large<<endl;
    cout<<"The position of the largest element in the array is : "<<pos<<endl;
    return 0;
}