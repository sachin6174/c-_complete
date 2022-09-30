//inclement and decrement operator
//++a --a
#include<iostream>
using namespace std;
main()
{
	start:
		cout<<endl;
	int a;
	
	
	cin>>a;
		cout<<(--a)<<endl;
		//now a=a-1 permanently
		
		
	cout<<endl<<(++a)<<endl;
	//so here on applying ++a a=(a-1)+1=aitself 
	
	int b;
	cin>>b;
	cout<<(++a)<<endl;
	cout<<(--b)<<endl;
	int result_a,result_b;
	result_a=++a;
	result_b=--b;
	cout<<result_a<<endl<<result_b<<endl;


}
