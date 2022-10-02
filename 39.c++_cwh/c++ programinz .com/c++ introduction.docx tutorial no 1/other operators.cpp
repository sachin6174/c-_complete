//other operators
#include<iostream>
using namespace std;
int main()
{
	//size of  ,?: , & ,. ,-> , << , >>
	
	cout<<sizeof(int);
	
	cout<<sizeof(signed int)<<" "<<sizeof(unsigned int)<<" "<<sizeof(short int)<<" "<<sizeof(long int)<<endl<<endl<<endl;
	
	
	cout<<sizeof(double)<<endl;
	cout<<sizeof(signed int);
	cout<<sizeof(float)<<endl;
	cout<<sizeof(char)<<endl;
	cout<<(sizeof(wchar_t))<<endl;
	cout<<sizeof(short wchar_t)<<endl;
	cout<<sizeof(void)<<endl;
	cout<<sizeof(bool)<<endl;
	cout<<sizeof(bool)<<endl;
	//and many others 
	
	
	// ?:
	
	 string result=(5<0)? "even":"odd";
	 string result1=(5<0)? "true":"false";
	 
	 string result2=(5>0)? "true":"false";
	  string result3=(5>0)? "sach":"jhoot";// fitst position () truth    and second position for () false
	  cout<<result3<<endl;
	 cout<<result<<endl;
	 cout<<result1<<endl;
	 cout<<result2<<endl;
	 cout<<result3<<endl;
	string result4=(5<0)? "1":"0";

	cout<<endl<<((5>0)?"1":"0");
		cout<<endl;
	cout<<result4<<endl;
	
	
	//&
	
	
	
}
