#include <iostream>
using namespace std;
#include "studentclass.cpp"//ctrl+enter to read headerfile.

int main()
{
    //static object creation (static memory me assign hoga apne variable ko address)

    int a;
    int b,c,d;
    students sachin;
    students bunty,raju,rohan,ram;
    cout<<sizeof(sachin)<<endl;
    cout<<&(sachin)<<endl;

    // dynamic memory allocation  or allocation of memory in heap
    int *p= new int;
    cout<<p<<endl;//address of head
    cout<<&p<<endl;//in stack
    
    int *k= new int;
    *k=5;
    cout<<*k<<endl;
    int *h,*g,*l= new int;//multiple allocation in one line
    
    students *raj= new students;// can we apply typecasting on a class or a user defined data type
    
    students *akshay= new students;
    cout<<raj<<endl;//variable raj to stack me hua hai store// raj ke ander location hai heap ka jaha par hame memory assign hua hai.//size of raj is 4 for 32 bit and 8 for 64 bit.


//filling values in class properties;
// variable_name.property=value;
sachin.age=20;
// sachin->age=25;// this is also wrong 
sachin.roll_number=1902219;
sachin.aadhar_num=564564654;
cout<<sachin.roll_number<<endl;
// calling function from class
sachin.fun();
cout<<endl<<endl;

//raj in heap
//

raj->age=5;//working
cout<<raj->age<<endl;//working




// (*raj).age = 5;//it can also be written as raj->age=5;
(*raj).roll_number=5;// it can also be written as raj->roll_number=5;
cout<<((*raj).age)<<endl;

(*raj).fun();
cout<<endl;
raj->fun();

return 0;
}