#include <iostream>
using namespace std;

//class is keyword
//classes are user defined data types
/*
class students()//dont put ()this is usde for functions

*/
class students{//students ia class 
int roll_number;
int age;
};

class product{
int price;
int weight;
int id;
};

int main()
{
    int a;//a is variable of data type intezer
    students sachin;// sachin is a variable of data type student ( a user defined data type)(or we can say that student is a object of calss students.)
    students bunty;

     int *p=new int[5];// heap memory allocation of an un names array although pointer can be used to access all the things
     students *raju= new students;




    
    return 0;
}