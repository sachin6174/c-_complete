//oop is a approach which is very good
//oop promice bug free //make code easy to understand
//class making in c+

#include <iostream>
using namespace std;

    //due to some limitation in structures we are going to use classes
    //data hiding can be implimented here


class employee  //() this is used when we make function
{
    private:
    int a,b,c;// 

    public:
    
    int d,e;
    void setdata(int a1,int b1,int c1);//just declared and prototyped

     void getdata()
     {
        cout<<"the value of a "<<a<<endl; 
        cout<<"the value of b "<<b<<endl; 
        cout<<"the value of c "<<c<<endl; 
        cout<<"the value of d "<<d<<endl; 
        cout<<"the value of e "<<e<<endl; 
        
     }

};

//function now defined
 void employee ::setdata(int a1,int b1,int c1)
 {
     a=a1;
     b=b1;
     c=c1; 
 }


int main()
{
    employee sachin;
    //sachin.a=12;  will throw error as decleared in private class
    sachin.d=5;
    sachin.e=10;
    sachin.setdata(1,2,3);
    sachin.getdata();
    return 0;
}