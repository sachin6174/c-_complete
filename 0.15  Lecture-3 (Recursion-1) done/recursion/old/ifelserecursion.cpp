#include <iostream>
//2,147,483,647
using namespace std;


void fun (int n){

if(n==1)
{}

   
else
fun(n-1);
// int p=0;
// p++;
// cout<<" " <<p<<endl;
cout<<n<<" ";
}

int main()
{
    // int n;cin>>n;
    fun(10);
    return 0;
}