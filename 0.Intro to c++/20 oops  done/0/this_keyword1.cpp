#include <iostream>
using namespace std;
//compulsory to use this keyword

class students{

    int rollnumber;
    // char const* name[10];//why this way only
    string name;
    public:

    students(int rollnumber, string name){
    //    this-> rollnumber=rollnumber;
    (*this).rollnumber=rollnumber;
        this -> name= name;
       
    }
    void display(){
        cout<<rollnumber<<" "<<name<<endl;
    }
};

int main()
{
    students sachin(5,"sachin");
    students rahul(12,"dsfsf fafda");
    sachin.display();
    rahul.display();


    
    
    return 0;
}