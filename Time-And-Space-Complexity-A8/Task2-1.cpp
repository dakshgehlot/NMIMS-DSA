#include <iostream>
using namespace std;

// Daksh Gehlot - N230
// Factorial through iteration
class Factorial{
    int fact = 1;
public:
    Factorial(int n){
        for (int i=1; i<=n; i++){
            fact = fact * i;
        }
    }
    void show(){
        cout << "\nFactorial is: " << fact;
    }
};

int main()
{
    Factorial A(5);
    A.show();
    return 0;
}