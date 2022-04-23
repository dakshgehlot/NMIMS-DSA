#include <iostream>
using namespace std;

// Fibonacci through iteration
int main()
{
    int num, f0 = 0, f1 = 1, fi = 0;
    cout << "\nEnter the number of terms: ";
    cin >> num;

    for (int i=0;i<num;i++){
        cout << f0 << " ";
        fi = f0 + f1;
        f0 = f1;
        f1 = fi;
    }
    return 0;
}

// Space complexity: 5
// Time complexity: O(n)