#include <iostream>
//2,147,483,647
using namespace std;


class student {


    int rollno;
    int age;
    int total_no_of_student;


    public:
    student(){
        cout<<int (this)<<endl;

        //cout<<&this<<endl;//this is a keyword not a variable so accessing address of this does not make any sence thats why this line is going to throw an error;
        cout<<sizeof(this)<<endl;
        // cout<<(*this).rollno<<endl;
        // cout<<this->rollno<<endl;
        cout<<"mujhe yad kia kya"<<endl;   
    }
  ~student(){
        cout<<"teri maut hu mai"<<endl;   
    }

};






int main()
{

student s1;

int a[5];
cout<<&a<<endl;
cout<<a<<endl;


// student s2;
    return 0;
}