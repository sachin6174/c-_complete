#include <iostream>
using namespace std;

class students{
    int age;
    int roll_number;
    public:
    void display()
    {
        cout<<age <<" "<<roll_number;
    }

    students(){// public region me hi constructor banta hai jo hame nahi dikhta but ye humne banaya to ab ye hame dikhega and ye hi ab kam karega.
    cout<<"constructor is called."<<endl;
    }
};


int main()
{
    students sachin;// it will write here constructor is called//asal me tumne ek function ko call kar lia
    sachin.display();
    cout<<endl;

    students *aryan=new students;// object decleared in heap or dynamic memory.
    cout<<endl;
    (*aryan).display();
    cout<<endl;
    aryan->display();
    
    
    
    return 0;
}