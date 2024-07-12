
#include<iostream>
using namespace std;

int main()
{
    int i,num,p,n;

    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    num=n;

    for(i=1;i<power;i++)
    {
        num=n*num;
    }
    cout<<"Answer: "<<num;
}
