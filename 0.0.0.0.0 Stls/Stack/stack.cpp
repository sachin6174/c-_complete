#include<bits/stdc++.h>
using namespace std;

/*

emplace_back() vs push_back()

push_back() copies a string into a vector. First, a new string object will be implicitly created initialized with provided char*. Then push_back will be called which will copy this string into the vector using the move constructor because the original string is a temporary object. Then the temporary object will be destroyed.

emplace_back() constructs a string in-place, so no temporary string will be created but rather emplace_back() will be called directly with char* argument. It will then create a string to be stored in the vector initialized with this char*. So, in this case, we avoid constructing and destroying an unnecessary temporary string object.

*/

//size ,empty,top push() pop swap emplace
int main(){
    // kabhi kabhi emplace estemal karna ghatak hota haim
   stack<int>s;
   s.emplace(12);// emplace is recieving data as reference so cop 
   s.emplace(12);
   stack<int> s1;
   s1.emplace(11);
   swap(s,s1);// type should be same size equality is not cumpolsury
   while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
   }
    
    vector<int>:: iterator it;
    // stack<int> ::iterator it;// we dont have iterator in stack
  return 0;
}
