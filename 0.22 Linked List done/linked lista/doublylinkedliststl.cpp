#include <iostream>
//2,147,483,647
#include<list>
using namespace std;
#include <iterator>


int main()
{
    list<int>dll;
    cout<<&(dll);// dll has been created statically.
    dll.assign(4,5);//created a four sized doubly linked list with all data in nodes as 5
    //5->5->5->5->null
    dll.push_back(10);
    dll.push_front(2);

    list <int> :: iterator it;
    it=dll.begin();// it has the address of the data block of the node 
    cout<<*it<<endl;
    for(it=dll.begin();it !=dll.end();){
        cout<<"  " <<*it<<endl;
        cout<<&(it);   //we can  print it
        it++;
    }

    // ::iteratorlist it;
    return 0;
}