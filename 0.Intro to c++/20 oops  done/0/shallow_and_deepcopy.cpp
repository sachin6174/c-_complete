#include <iostream>
using namespace std;

class student{
    int age ;
    char *name;// dinamic name point karkre chor dia
    public:
    student(int age ,char *name){
        this ->age =age;
        this ->name=name;// this is shallow coping and copy address of array so changes made will be reflected allthe times

    }
    void display(){
        cout<<this->age<<" "<<this->name;
    }

};

int main()
{
    char name[]= "sachin";
    student s1(20,name);
    s1.display();
    cout<<endl;

    name[3]='l';
    student s2(30,name);
    s2.display();
    cout<<endl;
    s1.display();// new name will we reflected here also that is why we should avoid shallow coping
    
    return 0;
}