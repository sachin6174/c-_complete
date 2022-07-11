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
    student s1;//constructor called
    student s2(12,15);// parameterized constructor called
    student s3(s2);//copy constructor will be called
    s3=s1;// no constructor will be called  it is copy assignment operator;//constructor already called for both
    student s5(s3);//copy constructor will be called
    student s6=s3;//here copy costructor is called 
    //because it will be interprited like student s6(s3);so copy constructor called
    
    return 0;
}