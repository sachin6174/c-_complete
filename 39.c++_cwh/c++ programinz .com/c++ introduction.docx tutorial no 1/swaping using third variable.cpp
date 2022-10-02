// swaping using third variable
#include<iostream>
using namespace std;
main()
{
	int a,b,temp;
	cout<<"Enter Value Of a and b:"<<endl;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	
    temp=a;
	a=b;
	b=temp;
	cout<<"values after swaping:"<<endl;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b;
	return 0;
}
