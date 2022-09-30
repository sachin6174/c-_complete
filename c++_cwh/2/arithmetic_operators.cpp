#include <iostream>
using namespace std;
int main()
{
int a=5, b=2;
cout<<"the value of a+b  "<<a+b<<endl;
cout<<"the value of a-b  "<<a-b<<endl;
cout<<"the value of a*b  "<<a*b<<endl;
cout<<"the value of a/b  "<<a/b<<endl;//operation on two interzers will give intezeral value  // it gives quotient //to get value in points we can use typecasting
cout<<"the value of a/b  "<<(double)a/b<<endl;//typecasting done to get value in points
cout<<"the value of a%b  "<<a%b<<endl<<endl<<endl;// used to print the remainder of division



cout<<"the value of a++  "<<a++<<endl;// means print a and then a me 1 add kar ke rakh lo
cout<<"the value of a    "<<a<<endl<<endl;// a ki nahi value store ho gai hai 'a' me ab to print karne par new value milegi

cout<<"the value of ++b  "<<++b<<endl;// means pahle a me 1 plus kar lo and the new wale ko print kar lo
cout<<"the value of b    "<<b<<endl<<endl;// yeha par b ka updated value print hoga 

int c=10;
cout<<"the value of c--  "<<c--<<endl;// means print 'c' then 'c' me se 1 minus ksrke use 'c' me store kar lo
cout<<"the value of c    "<<c<<endl<<endl;// means print 'c'  ki updated value print kar do

int d=30;
cout<<"the value of --d  "<<--d<<endl;// means pahle aap 'd' me se 1 minus kar lo and then updatwd value ko print kar do 
cout<<"the value of d    "<<d<<endl;
return 0;
}
