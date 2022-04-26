#include <iostream>

using namespace std;

int main()
{
    int i, n, arr[20], sum =0;
    float mean = 0.0;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cout<<"arr["<<i<<"] = ";
            cin>>arr[i];
        }
    for(i=0;i<n;i++)
        sum += arr[i];
    mean = (float)sum/n;
    cout<<"The sum of the array elements = "<<sum<<endl;
    cout<<"The mean of the array elements = "<<mean<<endl;
    return 0;
}