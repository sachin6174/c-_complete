#include <iostream>
using namespace std;
#include<vector>
#include<string>

// <class T>
int main()
{
//int a;
vector <int> v;
v.push_back(10);//0
v.push_back(20);//1
v.push_back(30);//2
v[3]=5;//3
v.push_back(40);//2// this will be executed at place of v[3]=5;
cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
cout<<v[3]<<endl;
// cout<<v[]<<endl;

    return 0;
}