#include<iostream>
//using namespace std;
int main()

{
	long int n,b,s;
	start:

	std::cout<<"Enter numbers:"<<std::endl;
	std::cin>>n>>b;
    s=n+b;
	std::cout<<std::endl<<s<<std::endl;
	goto start;
}
