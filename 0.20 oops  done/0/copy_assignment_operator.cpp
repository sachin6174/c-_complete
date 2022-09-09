#include <iostream>
//copy assignment operator(=)
using namespace std;
class student {
    int age ;
    int  rollno;
    public:
    student(){
        cout<<this<<endl;
        cout<<"default constructor called!"<<endl;
    }
    //parameterized constructor
    student (int age ,int rollno)
    {
        //this keyword is actually a pointer variable which store address of object
        cout<<this<<endl;
        this ->age=age;// this is used to specify here that we are want to store property age in argument age of created class;
        this->rollno=rollno;
        cout<<"parameterized constructor called!"<<endl;
    }


    void display(){
        cout<<age<<" "<<rollno<<endl;
    }

};

int main()
{
    student s1(11,1234);// parameterized constructor called
    student s2(12,85146);// parameterized constructor called
    s2=s1;//// it hapening like s2.age=s1.age; s2.rollno=s1.rollno;// we can not call any constructor here 
    // as for both s1 and s2 constructors are already called and we can only call a constructor one time
    // so we will use the copy assignemnt operator

    // for dynamic
    student *p1=new student(17,455);//parameterized constructor called
    student *p2=new student(182,454545545);//parameterized constructor called

    *p2=*p1;
    p2->display();// or (*p2).display();

    *p1=(s1);
    s1=*p2;

    return 0;
}