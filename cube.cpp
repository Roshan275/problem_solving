#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      sum=sum+(i**3);
    }
    cout<<" sum of cubes till n= "<<n<<" is: "<<sum;
}
