//c++ assignment operator
#include<iostream>
main()
{
	//=,+=,-=,*=,/=,%=
	int a=5,b=2;
	//a+b
	//a+=b means a=a+b
	//a-=b means a+a-b
	//and so on 
//	a=b;
   std::cout<<a<<std::endl;
   std::cout<<b<<std::endl;
   
//   a+=b;//a=a+b
//   std::cout<<a<<std::endl;
   //std::cout<<(a=b)<<std::endl;//after using this a=2
   //std::cout<<(a+=b)<<std::endl;
   std::cout<<(a-=b)<<std::endl;
   std::cout<<(a*=b)<<std::endl;
   std::cout<<(a/=b)<<std::endl;
   std::cout<<(a%=b)<<std::endl;
   
   //similerly b+=a ,b*= can be used too and we will get differnt values
   
   
}
