#include <iostream>
using namespace std;

int main() 
{
    int num;
  
    // Input the number
    cout << "Enter an integer to print its multiplication table: ";
    cin >> num;

    // Print multiplication table from 1 to 10
    cout << "Multiplication table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) 
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}
