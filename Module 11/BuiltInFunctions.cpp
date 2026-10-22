#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    // string str = "vikashintech at amity";
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;       //0 to str.length()-1;

    // string str = "abcd";
    // cout << str << endl;

    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout << str << endl;

    // str.pop_back();
    // str.pop_back();

    // string str = "abc";
    // string str2 = "def";
    // cout << str << endl;
    // // str = str + " " + str2 + " " + "1234";       //append
    // str = "xyz" + str; // modify
    // cout << str << endl;

    string str = "abcdef";      //0 1 2 3 4 5
    // reverse(str.begin()+2, str.end()-1);
    reverse(str.begin() + 2, str.begin() +5);
    cout << str << endl;
}