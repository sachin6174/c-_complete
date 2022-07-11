#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int d=2;
    int iter =0;
    bool divided=false;
    while (d<n)
    {
        iter++;
        if(n%d==0){  divided =true; break; }
        d++;
    }
    if(divided== true){ cout<<"not a prime"; }
    else{ if(n==1 || n==0) { cout<<"these are neithr prime nor composite.";}
        
        else   {cout<<"prime";}    }
    cout<< endl<<iter<<endl;

}

