#include <iostream>

using namespace std;

 
int fib(int n)
{
    if (n == 0)
    return 0;
    else if(n==1)
    return 1;
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
 
int main ()
{
    int n, i;
    cout<< "Enter the number of element you want in series :"<<endl;
    cin>>n;
    cout<<"fibonacci series is : "<<endl;
	for(i=0;i<n;i++) 
	{ 
		cout<<fib(i)<<" ";
	}
    
    return 0;
}
