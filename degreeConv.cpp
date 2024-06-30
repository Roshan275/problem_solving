#include <iostream>
using namespace std;

int main() 
{
    int choice;
    float temp;

    cout << "Temperature Conversion Menu" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice)
    {
     case 1:
     cout<<" Temperature in fahrenhit: "<<temp<<", Temperature in celsius: "<<(temp-32)*5/9;
     break;
     case 2:
     cout<<" Temperature in celcius: "<<temp<<", Temperature in fahrenheit: "<<(temp*9/5)+32;
     break;
     case 3:
     cout<<" Temperature in celsius: "<<temp<<", Temperature in kelvin: "<<temp+273.15;
     break;
     case 4:
     cout<<" Temperature in kelvin: "<<temp<<", Temperature in celsius: "<<temp-273.15;
     break;
    }
}
