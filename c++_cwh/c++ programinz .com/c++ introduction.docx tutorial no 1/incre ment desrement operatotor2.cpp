// incre decrement next page
#include<iostream>
using namespace std;
main()
{
	int a=5;
    cout<<(++a);//a will become 6
	cout<<endl<<(a++);//a will become7 this code is not making the thing same vale returned one time ten value returned which is added by 1 so it is 6 now
	cout<<endl<<(a++);//it will become 7 now


	cout<<endl<<(--a);//a will become 6 using --a afterusing a++ will give pervious value so it would be 7 (as above)
	cout<<endl<<(--a);//a will become 6
	
cout<<endl<<(a--); //it should be 6 same as above bacause a-- used first time it will work fine second time
cout<<endl<<(a--);
}
