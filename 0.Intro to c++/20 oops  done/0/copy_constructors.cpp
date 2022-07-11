#include <iostream>
using namespace std;

//copy constructors are those constructor which help to copy properties of  a particular object in new object
// it is a hidden function and always called during coping the properties like at student s2(s1);

class student{
    int age;
    int rollno;

    public:
    //default constructor
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
    student k1;
    student k2;
    int age;int rollno;
    cin>>age;
    cin>>rollno;
    student s1(age,rollno);//parameterized constructor will be called here
    s1.display();
    // now i want to create a new object s2 which have same property like s1
    /*traditional method or explicit method*/
    // student s2;
    // s2.age=s1.age;// this will only possible when the properties are public
    // s2.rollno=s1.rollno;// this will only possible when the properties are public


    //now copy constructor will come in play
    student s2(s1);//the copy constructor is called 
    cout<<&s2<<endl;
    // in back ground function call is like this s2.function(s1);
    s2.display();


    // doing things in heap memory
    student *p1= new student;// default constructor called
    // cout<<&p1<<endl;// is different from address of heap memory allocation
    student*p2 =new student (9 ,200);// parameterized constructor called
    (*p2).display();// can also be written as  p2->display()
    student*p3(p2);// copy constructor called
    p3->display();

    student m1(*p3);//copy constructor called
    m1.display();







    return 0;
}