//nested ternary operators
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	 string result= (n==0)?"zero":(n>0)? "positive":"negative";//not recomended for complex codes
	 cout<<result<<endl;
	
}
