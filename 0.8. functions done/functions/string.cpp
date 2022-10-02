#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;

int main()
{
    string s="sachin";
    cout<<s.substr()<<endl;
    cout<<s.substr(0)<<endl;
    cout<<s.substr(1)<<endl;
    cout<<s.substr(2)<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(4)<<endl;
    cout<<s.substr(5)<<endl;
    cout<<s.substr(6)<<endl;
    // s.substr(7);

    // cout<<<<endl;



    cout<<s.substr(1).substr(1);
    return 0;
}