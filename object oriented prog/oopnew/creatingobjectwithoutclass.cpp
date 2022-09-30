#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;

//



// sachin data
int *sachin_favno=new int;
string *sachin_name=new string;
int *sachin_rollno= new int;

void sachin(int a,string name, int b ){
    // cout<<this->a;
    *(sachin_favno)=a ;
    *sachin_name=name;
    *sachin_rollno=b;
}
void sachin_del(){
    delete (sachin_favno) ;
    delete sachin_name;
    delete sachin_rollno;
}

int main()
{
    sachin(6174,"sachin",1902219);
    cout<<*sachin_favno<<endl;
    sachin_del();
    cout<<*sachin_favno;
    int *p =new int(10.5);
    int l=7.00876;
    // when we realize everything is a class
    int *q =new int();
    int *r =new int;
    int a(5);
    int b(); // sath me hi value dena padega
    int c;cin>>c;

    // cout<<endl<<a;
    cout<<endl<< b;
    
    

    return 0;
}