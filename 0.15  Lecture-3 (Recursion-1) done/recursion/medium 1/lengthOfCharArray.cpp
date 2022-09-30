#include <iostream>
//2,147,483,647
#include<vector>
#include<algorithm>
using namespace std;


int length (char a[])

{
    if(a[0]=='\0'){
        return 0;
    }

    int small=length(a+1);
    return small+1;

}

void remove (char  *a, vector<char> & v){// passing array as reference like:- char  (&a);

    if(a[0]=='\0'){
        return  ;
    }
    char temp = a[0];
    remove(a+1,v);
    if(temp=='x'){
        for (size_t i = 0; i < sizeof(a+1); i++)
        {
            /* code */v.push_back((a+1)[i]);
        } 
    }
else{
     v.push_back(temp);
    for (size_t i = 0; i < sizeof(a+1); i++)
        {
            /* code */v.push_back((a+1)[i]);
        } 
}
   
}





int main()
{
    char a[100];
    cin>>a;// it is char array no need to cin for a[i] it will take input in just one pass it is defined like this for char array.
    vector<char> v;
    cout<<length(a); 
    remove(a,v);
    // iterator it;  wrong syntax for iterators
    // vector<int>::iterator i; //it is right sequenc of iterator decleration;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i);
    }
    

    return 0;
}