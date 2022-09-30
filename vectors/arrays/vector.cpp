#include <iostream>
using namespace std;
#include<bits/stdc++.h>
// template<class T>
int main()
{
    // int  b;
    // int a[n];
    vector <int> a;
    // single array
//capacity size kina ho chuka hai array ka
//size is no of elements present

    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;

//    cout<< sizeof(a)<<endl;//0// sum of properties //sum of sub variable//
   a.push_back(5);
   cout<<a[0]<<endl;//5

    cout<<a.size()<<endl;//1
    cout<<a.capacity()<<endl;

   a.push_back(10);
   cout<<a[1]<<endl;//10
    cout<<a.size()<<endl;//2
    cout<<a.capacity()<<endl;


   a.push_back(15);
   cout<<a[2]<<endl;//15
    cout<<a.size()<<endl;//3
    cout<<a.capacity()<<endl;//4

   a.push_back(15);
   cout<<a[3]<<endl;//15
    cout<<a.size()<<endl;//3
    cout<<a.capacity()<<endl;//4

   a.push_back(15);
   cout<<a[4]<<endl;//15
    cout<<a.size()<<endl;//3
    cout<<a.capacity()<<endl;//4

   a.push_back(15);
   cout<<a[5]<<endl;//15
    cout<<a.size()<<endl;//3
    cout<<a.capacity()<<endl;//4

   a.push_back(15);
   cout<<a[6]<<endl;//15
    cout<<a.size()<<endl;//3
    cout<<a.capacity()<<endl;//4

   a.push_back(15);
   cout<<a[7]<<endl;//15
    cout<<a.size()<<endl;//3
    cout<<a.capacity()<<endl;//4

   a.push_back(15);
   cout<<a[9]<<endl;//15
    cout<<a.size()<<endl;//3
    cout<<a.capacity()<<endl;//4






    return 0;
}