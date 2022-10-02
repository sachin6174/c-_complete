//numper printed is positive or negative
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a number to check whether no is positivre or not"<<endl;
	cin>>number;
	if(number>0)
	{
		cout<<"number you entered "<<"\"" << number<< "\""<< " is positive";
	}
	return 0;
}
