#include<bits/stdc++.h>
using namespace std;



template<typename t>
// by default everything is public
struct employee{
    t a;
    t b;
    employee(t k){
     
    }
};



int main(){
    employee<int> sachin(3);
    employee<int> *l= new  employee<int>(3);
}