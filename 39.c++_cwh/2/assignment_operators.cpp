//assinment operators are used to assign the value to the variables
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int b;
    //a=b;// not a right way to say
   // b=a;// after equal to is the value which is known

cout<<"the value of b "<<(b=a)<<endl<<endl;// now b is 5

int c=2;

cout<<"the value of b =c "<<(b=c)<<endl;
cout<<"the value of b+=c "<<(b+=c)<<endl;
cout<<"the value of b-=c "<<(b-=c)<<endl;
cout<<"the value of b*=c "<<(b*=c)<<endl;
cout<<"the value of b/=c "<<(b/=(double)c)<<endl;// we are not able to tpecasting. solve in later
cout<<"the value of b%=c "<<(b%=c)<<endl;
return 0;
}