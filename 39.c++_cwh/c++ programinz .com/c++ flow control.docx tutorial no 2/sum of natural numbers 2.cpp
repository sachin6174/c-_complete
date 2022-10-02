//sum of natural no 2usin gloop
//sum of integers till n using for loop
#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	
	for(int i=1;i<=n;++i)
        	{
		          s+=i;
		          if(i==n)
		          { cout<<s<<endl;
				  }
				  
		         
	       }
	
    cout<<endl<<s<<endl;
    
}
