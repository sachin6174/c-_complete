#include <iostream>
//2,147,483,647
using namespace std;

int byrefandconstref(int const  &m){
    cout<<endl<<"in byrefandconstref function  "<<&m<<" have "<<m <<endl;
    // m++; you can not do changes in  m as it is sharing constant reference with the n passed;
    return 0;
}
int passbyvalue(int t){
    cout<<endl<<"in passbyvalue function  "<<&t<<" have "<<t <<endl;
    t++; //you can  changes as it will create a new variable in this function callstack we are allow to chgange that.
    return 0;
}
int main()

{
//   int *p = &(fac(20));
//   cout<<(&(fac(20)));
    int n;
    cin>>n;
    cout<<"in main fun  "<<&n;
   cout<< byrefandconstref(n);
   cout<<endl<<n;
   cout<<endl;
   cout<<endl;

   cout<< passbyvalue(n);

    return 0;
}