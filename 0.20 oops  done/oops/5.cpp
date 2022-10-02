#include <iostream>
using namespace std;

class profile{
    public:
    char name[20];
    int rollno;

    private:    
    int age;

    public:
    void getage(){//getters function
        cout<<age<<endl;
        return;
    }

    int setage (int a){// setters function
    age=a;
    cout<<age<<endl;
    return age;
    }
};

int main()
{
    profile sachin;
    sachin.rollno=14;
    cout<<sachin.rollno<<endl;//

    sachin.getage();//justcall// will give garbadge value
    //we read private value here 
    sachin.setage(20);// set my age as 20 //although age is a private subvariable;



    // cout<<sachin.getage()<<endl;//wrong as it returns void and performs a cout task.

    
    return 0;
}