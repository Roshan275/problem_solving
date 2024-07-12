#include <iostream>
using namespace std;

int main() {
    int Num=0;
    cout<<"Enter the number: ";
    cin>>Num;
    
    if(Num<0){
      cout<<"enter natural numbers only";
    }
    else if (Num%2==0){
        cout<<"Entered number is Even.";
    }
    else {
        cout<<"Entered number is odd.";
    }  
    
    return 0;
}
