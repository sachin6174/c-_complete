#include <iostream>
using namespace std;

int main()
{
    int a[4]={5,1,2,6};//4 size ka array
    cout<<int(a)<<endl<<endl;
    int p=100;
    // int t=7;
    cout<<a[0]<<endl;//this exist
    cout<<a[1]<<endl;//this exist
    cout<<a[2]<<endl;//this exist
    cout<<a[3]<<endl<<endl;//this exist

    
    cout<<a[4]<<endl;// that does not exist// this will print value of p
    cout<<a[5]<<endl;// that does not exist
    cout<<a[10]<<endl;// that does not exist
    cout<<a[-1]<<endl;// that does not exist
    cout<<a[20]<<endl<<endl;// that does not exist
    // cout<<a[100]<<endl<<endl;// that does not exist   and causes segmentation fault.


    cout<<a[-1]<<endl;// that does not exist
    cout<<a[-10]<<endl;// that does not exist
    //matlab ki compiler assign values 
    return 0;
}