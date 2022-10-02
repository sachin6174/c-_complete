#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Number of your choice"<<endl;
	cin>>n;
	if(n!=0)
	{
		if ((n%2)==0)
		{
			cout<<n <<" is a even number."<<endl;
		}
		else if((n%2)!=0)
		{
			cout<<n <<" is odd number"<<endl;
		}	
	}
	else
		{
			cout<<" it is zero.";
		}
}
