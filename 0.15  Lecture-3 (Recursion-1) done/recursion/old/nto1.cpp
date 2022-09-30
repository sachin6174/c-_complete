#include <iostream>
//2,147,483,647
using namespace std;



void fun(int n){

if(n==1){cout<<n; 
return;//yeha return likhne ka matlab hai ja niche bhi chle ja hehi khatam mat ho
}


cout<<n<< " ";
fun(n-1);



}
int main()
{
    {
    // int n;cin>>n;
    fun(10);
    return 0;
}
    return 0;
}