#include<iostream>
using namespace std;
main()
{
	double fraction;
	int a=7.0,b=2;//or in the way 
	int s;
	s=a+b;//can also be done
	//int a,b;
	//a=7;
	//b=2;
cout<<s<<endl;
cout<<(a+b)<<endl;// bracket me direct hum expression (like a+b)likh sakte hai no need to make a new veriable and then assign that value to the expression
cout<<(a-b)<<endl;
cout<<(a*b)<<endl;
cout<<(a/b)<<endl;
// int a=7.0; wrong as int can not be writen as we already defined a as int at the start
a=7.0;
cout<<(a/b)<<endl;

cout<<(a%b)<<endl<<endl<<endl<<endl<<endl;

//mixed fraction
cout<<(a/b)<<"+"<<(a%b)<<"/"<<b<<endl;

fraction=(a%b)/b;
cout<<fraction<<endl;

//to get complete answer for division
int n,d;
cin>>n>>d;
float ans=n/d;

cout<<ans<<endl;
return 0;	
}
