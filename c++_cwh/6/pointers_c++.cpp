#include <iostream>
using namespace std;

int main()
{
    //pointers are data type (variables) which stores address of other data types.
    int a = 5;
    int *ptr = &a; //&a is address of a//* is dereference operator

    cout << "The address of a " << (int)ptr << endl; //in intezer typecasted
    cout << "The address of a " << ptr << endl;      //in hexa decimal
    cout << "The address of a " << &a << endl
         << endl; //as &a stores address

    // getting values for stored address using * derefference operator.
    cout << "The value of the variable whose address is stored in ptr " << *ptr << endl; //this is work of dereference operator
    cout << "The value of the variable whose address is stored in ptr " << *ptr << endl<<endl; //as &a stores address
    
    //pointer to pointer
    //       int *k=&ptr; wrong syntax
    int **k = &ptr;
    cout<<"The address of variable ptr " <<k<<endl;
    cout<<"The value of variable " <<*k<<endl;//here value is the address
    cout<<"The value of variable " <<**k<<endl;
    return 0;
}