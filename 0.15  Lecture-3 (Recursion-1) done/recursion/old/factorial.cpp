#include <iostream>
using namespace std;
//fact(n)= n*fact(n-1);   
/// fact(n-1) ye la ke do tum mujhe  mai bas  smalloutpt* n kar ne ko hu

int fact(int n){
    if(n==0){return 1;}
    int smalloutput=fact(n-1);
    return n*smalloutput;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}