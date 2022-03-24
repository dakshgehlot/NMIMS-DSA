#include <iostream>
using namespace std;

class Fibonacci{
public:
    int fib(int n){
        if(n <= 1)
            return n;
        return fib(n-1) + fib(n-2);
    }
};

int main(){
    Fibonacci A;
    int num, n;
    cout << "Enter the value of n: ";
    cin >> n;
    num = A.fib(n);
    cout << "The term is: " << num;
    return 0;
}