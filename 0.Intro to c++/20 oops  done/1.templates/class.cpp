#include<bits/stdc++.h>
using namespace std;

template<class T,class L> // multiple template
class myclass{
    public:
    T a;
    L b;
    myclass(T a,L b){

    }
};


int main(){
   myclass<int,string> a(12,"sachin");
   myclass<int,int> a1(12,21);

}