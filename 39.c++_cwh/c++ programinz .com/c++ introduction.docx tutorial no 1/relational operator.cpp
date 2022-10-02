//relatiobnal operator
#include<iostream>
using namespace std;
main()
{
	//== ,!=(not equal to),>,<,>=,<=
	//if tenation satisfy then it will give true and if the relation not satisfy then it ids false
	int a=3,b=5;
	bool result;
	result=(a==b);// in bracket as = is also used inside bracket
	cout<<result<<endl;

	
	//it is inbuiltly coded in bool function  just write condition no need to store value in result veriable
	cout<<(a==b)<<endl;
	
    cout<<(a!=b)<<endl;	
	cout<<(a>b)<<endl;
	cout<<(a<b)<<endl;
	
	b=3;
	cout<<(a>=b)<<endl;
	cout<<(a<=b)<<endl;
}
