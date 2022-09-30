//logical operator is used on values which is already applied with relational operator 
#include<iostream>
using namespace std;
int main()
{
	//&& (true if both true) ,|| (true if at least one is true) ,|(true if operand is false)not single input single out put
	int a=5,b=8;
	//can also be done using storing result in a veriable
    bool result;
    result=(a>3)&&(b>5);
    cout<<result<<endl<<endl;
	cout<<((a>3)&&(b>5))<<endl;
	cout<<(a>3)&&(b>5);//both true hence 1
	cout<<endl<<(3==5)&&(b>5);// first wrong second true hence false(0)
	cout<<endl<<(3==5)&&(b<5);//first and second both wrong  hence (0)
	
	//|| operator 
	cout<<endl<<(3!=5)||(3<5);
	cout<<endl<<(3!=5)||(3>5);
	cout<<endl<<(3==5)||(3>5);
	
	//!
	
	cout<<endl<<!(a==b)<<endl;
	cout<<!(a!=b)<<endl;
//	cout<<(a>3)&&(b>5)<<endl; this code will not work dut () confusion so we need to put final expression in seperate bracket before using endl;

	
	
}
