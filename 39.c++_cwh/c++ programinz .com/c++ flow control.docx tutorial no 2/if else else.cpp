// if ,if else, //else
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	if (n>0)
	{
		cout<<"no entered "<<n<<" is a positive number."<<endl;
		 
	}
	else if(n<0)
	{
		cout<<" no you entered is "<<n<<" is a negative number."<<endl;
	}
	else
	{
		cout<<" number "<<n<<" is neither negative or positive.";
	}
	return 0;
}
