#include <iostream>

using namespace std;


#define size 20 

int main() 
    {
        int arr[size], num, i, n, beg, end, mid, found=0;
        cout<<"Enter the number of elements in the array: ";
        cin>>n;
        cout<<"Enter the elements in ascending order"<<endl;
        cout<<"Enter the elements: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the number that has to be searched: "<<endl;
        cin>>num; 
        beg = 0, end = n-1;
        while(beg<=end)
        {
            mid = (beg + end)/2;
            if (arr[mid] == num)
            {
                cout<<num<<" is present in the array at position "<<mid+1<<endl;
                found =1;
                break;
            }
            else if (arr[mid]>num)
                    end = mid-1;
            else
                    beg = mid+1;
        }
        if (beg > end && found == 0)
        cout<<num<<" does not exist in the array"<<endl;
 
return 0;
}
