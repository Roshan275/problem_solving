#include <iostream>
using namespace std;

int main() {
    int num;

    // Input a number
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) 
    {
        cout << num << " is even." << endl;
    } 
    else 
    {
        cout << num << " is odd." << endl;
    }

    return 0;
}
