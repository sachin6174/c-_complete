#include <iostream>
//2,147,483,647
#include<vector>
using namespace std;

int main()
{
    vector <int > a;
    vector <int>* p=new vector<int>(4,-1);// (size ,all elements initialization) 
    vector <int>* p2=new vector<int>(4);// size onnly constructor
    cout<<(*p)[0];
    cout<<(*p)[1];
    cout<<(*p)[2];
    cout<<(*p).at(2);
    cout<<(*p)[3]<<endl;
    cout<<(*p)[4];

    int sd;

    cout<<endl<<&sd;
    *((&sd)-10000000)=12;

    return 0;
    
}