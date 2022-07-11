#include <iostream>
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
    ~student(){
        cout<<"destructor called!"<<endl;
    }

};

int main()
{
    student s1;// default constructor called
    student *s2=new student;// default constructor called for heap;
    // dynamic ke lie distructor call nahi hoga
    delete s2;// here distructor will be called



    return 0;
}