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

    void setage (int a,int password){// giving constraints to private sub variable.
    age=a;
    if (password==123)
    {
        if (age<0){ cout<<"negative age not allowed";
        
            return;}
    
    cout<<age<<endl;
    return;
    }
    cout<<"password wrong";
    }
    
    
};

int main()
{
    profile sachin;
    sachin.rollno=14;
    cout<<sachin.rollno<<endl;//

    sachin.getage();//justcall// will give garbadge value
    //we read private value here 
    cout<<endl;
    int k;
    cout<<"enter age:";
    cin>>k;
    int pass;
    cout<<"enterpassword: ";
    cin>>pass;
    sachin.setage(k,pass);// set my age as 20 //although age is a private subvariable;



    // cout<<sachin.getage()<<endl;//wrong as it returns void and performs a cout task.

    
    return 0;
}