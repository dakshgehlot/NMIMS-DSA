#include <iostream>

using namespace std;

 
int main()
{
  int n, first = 0, second = 1, result, i;
  cout<<"Please give an input upto you want to print series : "<<endl;
  cin>>n;
  cout<<"Fibonacci Series is:"<<endl;
  cout<<first<<" "<<second<<" ";
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      result = i;
    else
    {
        
      result = first + second;
      first = second;
      second = result;
      cout<<result<<" ";
    }
    
  } 
  return 0;
} 

