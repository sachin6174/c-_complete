// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <vector>// no need to include it already in library ka bapp bits/stdc++.h

// <Class T>
int main()
{
    vector<int > a;

    int n;// no of elements i want to put in my array
    cin>>n;// n is the size of vector ///and capacity of vector are different things

    cout<<"\n";
    for (int  i = 0; i < n; i++)
    {
        cout<<a.capacity()<<endl;
        a.push_back (i+1);// first it will increase capacity then add element
        cout<< a.size()<<endl;// pushback karte hi capacity 1 ho gai aur element bhi add ho gaya
        cout<<a.capacity()<<endl<<endl;// capacity ab unti hi hai jo uper wale pushback ne create ki thi 
        // capacity apne app nahi badhti puch back badatha hai 0->1->2->4->8 like this
    }
    

    return 0;
}