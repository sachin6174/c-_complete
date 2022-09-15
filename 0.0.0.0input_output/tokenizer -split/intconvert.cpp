// C++ program to demonstrate working of stoi()
// Work only if compiler supports C++11 or above
// Because STOI() was added in C++ after 2011
#include <iostream>
#include <string>

using namespace std;

int main()
{
 string str1 = "45";
 string str2 = "3.14159";
 string str3 = "31337 geek";

 int myint1 = std::stoi(str1); // type of explicit type casting
 int myint2 = std::stoi(str2); // type of explicit type casting
 int myint3 = std::stoi(str3); // type of explicit type casting

 cout << "stoi(\"" << str1 << "\") is " << myint1
  << '\n';
 cout << "stoi(\"" << str2 << "\") is " << myint2
  << '\n';
 cout << "stoi(\"" << str3 << "\") is " << myint3
  << '\n';

 return 0;
}
