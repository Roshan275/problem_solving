#include<iostream>
using namespace std;

int gcd(int a,int b) 
{ 
    // Find Minimum of a and b 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    // Return gcd of a and b 
    return result; 
} 
int main()
{
    int a,b,num,LCM;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    
    num=a*b;
    LCM = a*b/gcd(a,b);
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<LCM<<endl;
}

