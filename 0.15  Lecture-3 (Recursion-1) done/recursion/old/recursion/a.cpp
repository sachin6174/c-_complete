#include <iostream>
using namespace std;

//segmentation fault. running out of memory
unsigned long long int factorial(int n)
{
    cout<<n<<endl;
    if(n<0){
        cout<<"you can not calculate factorial for this"<<endl;
         return 0;
    }
    if (n==0){
        return 1;
    }

    int p=(n*factorial(n-1));
    return p;
}

int main()
{
    int k;
    cin>>k;
    // factorial(k);// this means p ke ander ka value just pada hua hai ek memory loaction par
    // factorial(k);  writing only this will not going to do anythng you need to print value which is returned by int 
    cout<<factorial(k)<<endl;// we need to print the things
}