#include <iostream>
using namespace std;
// non compulsory to use this keyword
class students{

    int rollnumber;
    // char const* name[10];//why this way only
    string name;
    public:

    students(int r, string n){
    //    this-> rollnumber=rollnumber;
   rollnumber=r;
   name= n;
       
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