
#include <iostream>

using namespace std;

 
int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main()  
{  
  int number;  
  int fact;  
  cout<<"Enter a number: "<<endl;  
  cin>>number;   
   
  fact = factorial(number);  
  cout<<"Factorial of "<<number<<" is "<< fact<<endl;  
  return 0;  
}