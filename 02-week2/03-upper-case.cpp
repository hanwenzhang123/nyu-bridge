Convert to UPPER CASE
Example: 
please enter a lower case letter: t
the upper case of t is T

#include <iostream>
using namespace std;

int main() {
  char lowerCaseLetter, upperCaseLetter;
  int offset;

  cout<<"Please enter a lower case letter: "<<endl;
  cin>>lowerCaseLetter;

  offset = (int)(lowerCaseLetter - 'a');    //the integer value
  upperCaseLetter = (char)('A' + offset);   //that will be uppercase letter
  
  cout<<"The upper case of "<<lowerCaseLetter<<" is "<<upperCaseLetter<<endl;
  return 0;
}
