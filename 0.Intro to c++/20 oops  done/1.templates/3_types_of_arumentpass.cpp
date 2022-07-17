// there are three types of argument pass 
// 1. pass by value
//2. pass by address 
// 3. pass by refetence
#include "bits.cpp"
using namespace std;


void valswap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    // cout<<a<< " "<<b<<endl;
}

void addswap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


void refswap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
   
}

int main(){
    // 1.pass by val
    int a=10;
    int b=20;
    valswap(a,b);
    cout<<a<< " "<<b<<endl;
    //it will not work

    //2.pass by address
    addswap(&a,&b);
    cout<<a<< " "<<b<<endl;

    //3.pass  by reference

    int c=5;
    int d=6;
    refswap(c,d);
    cout<<c<< " "<<d<<endl;
}