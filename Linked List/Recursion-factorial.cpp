#include <iostream>
using namespace std;

class Factorial{
    int fact;
public:
    int factorial(int n){
        if(n > 1){
            fact = n * factorial(n - 1);
            return fact;
        }else{
            return 1;
        }
    }
};

int main(){
    Factorial fact;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial is: " << fact.factorial(n);
    return 0;
}