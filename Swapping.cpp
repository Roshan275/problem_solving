#include <iostream>
using namespace std;

int main() 
{
    int num1, num2, temp;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Swap the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Print numbers after swapping
    cout << "After swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
