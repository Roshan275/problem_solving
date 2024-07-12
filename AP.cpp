#include<iostream>
using namespace std;

int main()
{
    int i,a,d;
    cout<<"Enter the no. upto which you what A.P.: ";
    cin>>a;
    cout<<"Enter the common difference: ";
    cin>>d;
    i=1;
    while(i<=a){
        cout<<i<<", ";
        i=i+d;
    }
    
    return 0;
}
