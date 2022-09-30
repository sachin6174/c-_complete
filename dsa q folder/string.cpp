#include <iostream>
//2,147,483,647
using namespace std;

//getline()
//push_back()








int main()
{
    string s(2,1);// initial size of string class is 15 it will double according to the requirement
   cout<< s.capacity();
   cout<<(s[0]);
    cin>>s;
   cout<< s.capacity();

   // dynamic string creation
   string* sa=new string;
    
    // cout<<(*(&s))+1;
    return 0;
}