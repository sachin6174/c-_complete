#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>
using namespace std;
// #include<boost/math/>

int lcm(int a,int b){
    int d(max(a,b)-1);
    while (d++)// d++ making 1 unit jump so decreasd d by -1 above
    {   
        if(d%a==0&&d%b==0){
        return d;
        break;
        }
    }
    return 0;
}


class fraction{

    int a;
    int b;

    public:
    //constructor
    fraction(int a,int b){
        this->a=a;
        this->b=b;

    }

    void display(){
        cout<<a<<"/"<<b<<endl;

    }

    void sum(fraction f){
        lcm(this->b,f.b);
    }

};

// fraction simplify(fraction a){

    
// }

int hcf(int(a),int (b)){
    a=max(a,b);
    b=min(a,b);
    if(b==0){
        return a;
    }
    int temp=b;
    b=a%b;
    a=temp;
    return hcf(a,b);
}

// right recursinve lcm
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
    int gcd1(int a, int b)
{
    if (b == 0)
        return a;
    return gcd1(b, a % b);
     
}
