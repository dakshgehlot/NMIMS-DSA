#include <iostream>
using namespace std;
int main()
{
    int i, n;
    double sum=0, average=0;
    cout << "\nEnter the number integers you want in an array: ";
    cin >> n;
    int arr[n];
    cout << "\n Enter " << n << " integers into an array :\n";
    for (i = 0; i < n; i++)
    {
        cout << " Enter arr [ " << i << " ] : ";
        cin >> arr[i];
    }
    cout << "\n The Elements of the Array are: \n";
    for (i = 0; i < n; i++)
    {
        cout << " arr [ " << i << " ] = " << arr[i] << endl;
        sum += arr[i];
    }
    average = sum/n;
    cout << "\n The Sum of the Elements of the Array is : " << sum << "\n";
    cout << "\n The Average of the Elements of the Array is : " << average << "\n";
    cout << "\n";
    return 0;
}