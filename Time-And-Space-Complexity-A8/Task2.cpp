#include <iostream>
using namespace std;

class Factorial{
    int fact = 1;
public:
    Factorial(int n){
        for (int i=1; i<=n; i++){
            fact = fact * i;
        }
    }
    void show(){
        cout << "Factorial is: " << fact;
    }
};

int main()
{
    int fact;
    Factorial A(5);
    A.show();
    return 0;
}