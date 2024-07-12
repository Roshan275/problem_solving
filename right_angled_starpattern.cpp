// right triangle
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    int n;
    cout<<"Enter the no. of baseline stars: "
    cin>>n;
 
    // ith row has i elements
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
