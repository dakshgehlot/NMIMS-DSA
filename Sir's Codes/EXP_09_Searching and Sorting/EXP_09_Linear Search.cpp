#include <iostream>

using namespace std;


#define size 20 
int main() 
    {
        int arr[size], num, i, n, found = 0, pos = -1;
        cout<<"Enter the number of elements in the array : "<<endl;
        cin>>n;
        cout<<"Enter the elements: "<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"\n Enter the number that has to be searched : "<<endl;
        cin>>num;
        for(i=0;i<n;i++)
        {
            if(arr[i] == num)
            {
                found =1;
                pos=i;
                cout<<num<<" is found in the array at position= "<<i+1<<endl; 
                break;
            }
        }
        if (found=0)
        {
                cout<<num<<"Does not exist in the array"<<endl;
        }
                return 0;
            }
 