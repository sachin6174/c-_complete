#include <iostream>
using namespace std;
class employee{
    int  id;// properties of a class
    double salary;
    // by default the properties of a class is private.
    public:
    char gender[10];
};

int main()
{
    long long int  n ;

    cin>>n;
    for (int  i = 0; i<1000; i++)
    {
            long long int*a=new long long int[n];// allocation of dynamic array
            delete []a;

    }
    int *a= new int;// allocation of dynamic variable

    employee sachin;// created an object in static

    employee *raju= new employee ;// created an object in dynamic memory
    



    for (long long int  i = 0; i < 1500000000; i++)
    {
       int temp=2;
    }
    cout<<"sachin";
    

    return 0;
}