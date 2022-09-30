#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>

int main()
{
    // dynamic allocation in vectors
    vector<int> *p=new vector<int>;
    (*p).push_back(3);// WILL WILL USE the name to push and pop back
    (*p).pop_back();// to remove the last element
    (*p)[0]=4;// here too need *p

    
    vector<int > v={1,2,3,4,4,4,44,4,4,4,4,4,4,4,9};
    
    cout<<v.size( )<<endl;
    cout<<v.at(14)<<endl;
    return 0;
}
// capacity  //called with object.function
//size  //called with object.function
//pop_back  //called with object.function