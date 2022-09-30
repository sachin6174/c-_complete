// swap two numbers
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter First And Second Number"<<endl;
	cin>>a>>b;
//	a=b;
 //   b=a;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"result after swaping:"<<endl;
	cout<<endl<<a<<endl<<b;
	return 0;
}
