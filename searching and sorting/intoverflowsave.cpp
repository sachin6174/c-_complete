#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include<climits>

int main()
{
    int a =INT_MAX;//2,147,483,647
    int b =INT_MAX;//2,147,483,647
    int c=(a+b)/2;//2,147,483,647
    cout<<c<<endl;
    int d=a+(b-a)/2;//2,147,483,647
    cout<<d<<endl;
    int g=CHAR_MAX;
    cout<<g<<endl;
    

    return 0;
}