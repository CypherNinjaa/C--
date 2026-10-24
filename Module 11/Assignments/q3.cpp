// Q3. Check whether the given string is palindrome or not.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    string rev = str;
    reverse(str.begin(), str.end());
  if (str==rev)
  {
    cout<<"it is palindrome";
  }else{
    cout<<"!";
  }
  
}