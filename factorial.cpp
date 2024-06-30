#include <iostream>
using namespace std;

int main() 
{
    int num;
    int factorial = 1;

    // Input the number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Calculate the factorial
    for (int i = 1; i <= num; ++i) 
    {
        factorial *= i;
    }

    // Output the result
    cout << "Factorial of " << num << " = " << factorial << endl;

    return 0;
}
