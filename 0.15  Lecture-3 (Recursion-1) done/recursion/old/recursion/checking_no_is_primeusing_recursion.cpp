#include <iostream>
using namespace std;

bool f(int n, int p)
{
    if(n==0){return false;}
    if(n==1){return false;}
    if(n==2){return true;}
    if ((n%p)==0)   
    {
        if (p<n)
        {
          return false;
        }
        
        return true;      
    }
     p++;
    return f(n,p);
}

int main()
{
     int n;
    cin>>n;
    int p=2;
    int k=f(n,p);
    if (k==0){

    cout<<"it is not a prime"<<endl;
    }
    else{cout<<"it is a prime number"<<endl;}

    return 0;
}