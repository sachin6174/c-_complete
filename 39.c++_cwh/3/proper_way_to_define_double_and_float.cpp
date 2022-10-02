//by default c++ take any point no like 2.7 as double not float so it need to be correctly decleared
#include <iostream>
using namespace std;
int main()
{ 
    // we are using literals like f,l,d (float, double,long double literals)for right identifications of numbers
    float a =2.7;//size of float if 4 also bring the cursor to 2.7 it show it as double.
    cout<<"value of a: "<<a<<endl;
    cout<<"size of a: "<<sizeof(a)<<endl<<endl;//it will show as float as it is stored in float variable
    cout<<"size of 2.7: "<<sizeof(2.7)<<endl<<endl;//it will show as float as it is stored in float variable
    cout<<"size of 2.7f: "<<sizeof(2.7f)<<endl;//it will show as float as it is stored in float variable
    cout<<"size of 2.7F: "<<sizeof(2.7F)<<endl<<endl;//it will show as float as it is stored in float variable
    cout<<"size of 2.7l: "<<sizeof(2.7l)<<endl;//it will show as float as it is stored in float variable
    cout<<"size of 2.7L: "<<sizeof(2.7L)<<endl<<endl;//it will show as float as it is stored in float variable
    cout<<"size of 2.7d: "<<sizeof(2.7d)<<endl;//it will show as float as it is stored in float variable
    cout<<"size of 2.7D: "<<sizeof(2.7D)<<endl;//it will show as float as it is stored in float variable
return 0;
}

















