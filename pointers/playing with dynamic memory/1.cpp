#include <iostream>
	
#include <typeinfo>
#include<typeindex>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;

int main()
{
    cout<<(new int)<<endl;
    cout<<*(new int)<<endl;
    int a=*(new int)=15;
    cout<<a<<endl;
    cout<<*(new int)<<endl;
    cout<<typeid(new int ).name()<<endl;
    cout<<typeid(a ).name()<<endl;
    // cout<<type(a);
    
    return 0;
}