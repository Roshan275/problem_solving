#include<iostream>
using namespace std;

int main()
 {
   char Alpha;
   cout<<"Enter a Alphabet: ";
   cin>>Alpha;

   if(Alpha=='a'|| Alpha=='e' || Alpha=='i' || Alpha=='o' || Alpha=='u')  // Check if the character is a lowercase vowel
     {
        cout<<Alpha<<" is a vowel.";
     }
   else if(Alpha=='A'|| Alpha=='E' || Alpha=='I' || Alpha=='O' || Alpha=='U') // Check if the character is an uppercase vowel
    { 
     cout<<Alpha<<" is a vowel.";
    }
   else
    {
      cout<<Alpha<<" is a consonant.";
    }
  
}
