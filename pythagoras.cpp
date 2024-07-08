#include <iostream>
using namespace std;

int main() {
    int s1,s2,s3;
    cout<<"Enter first side: ";
    cin>>s1;
    cout<<"Enter second side: ";
    cin>>s2;
    cout<<"Enter third side: ";
    cin>>s3;
    
    if(s1>s2 && s1>s3){
        int S1 = s2*s2 + s3*s3;
        int S2 = s1*s1;
        if(S1 == S2){
            cout<<"It is a right angled triangle";
        }
        else{
            cout<<"It is not a right angled triangle";
        }
    }
    else if(s2>s1 && s2>s3){
        int S1 = s1*s1* + s3*s3;
        int S2 = s2*s2;
        if(S1 == S2){
            cout<<"It is a right angled triangle";
        }
        else{
            cout<<"It is not a right angled triangle";
        }
    }
    else {
        int S1 = s1*s1* + s2*s2;
        int S2 = s3*s3;
        if(S1 == S2){
            cout<<"It is a right angled triangle";
        }
        else{
            cout<<"It is not a right angled triangle";
        }
    }
}
