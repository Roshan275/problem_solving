#include <iostream>
using namespace std;

int main() {
    int num1,num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Check if the number is even or odd
    if (num1 % 2 == 0 && num2%2==0) 
    {
        cout <<"Both are Even"<< endl;
    } 
    else if (num1%2==0){
        cout << num1 << " is Even and "<< num2<<" is odd"<<endl;
    }
    else
    {
        cout << "both are odd"<< endl;
    }

    return 0;
}
