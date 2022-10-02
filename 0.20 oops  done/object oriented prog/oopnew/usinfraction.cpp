#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
#include<bits/stdc++.h>

using namespace std;
#include"fractionclass.h"

int main()
{   
    // lcm(1,3);
    fraction f0();
    fraction f1(1,3);
    
    fraction f2(3,3);
    f1.display();
    f2.display();
    cout<<endl;
    cout<<lcm(5,lcm(10,121))<<endl;
    cout<<hcf(6,24);

    return 0;
}