#include <iostream>
#include<fstream>//for file input and output stream
/*
classes in ihis headerfiles
1.fstreambase
2.ifstream--derieved from fstreambase
3.ofstream--derieved from fstreambase
*/
// inorder to work with files inc++
//thre are two ways to open a file
//using constructor
//using member function open() of the class
using namespace std;

int main()
{
    


    //reading in file
    string st2;
    ifstream in("sample2.txt");//to do write operation
    // in>>st2;//just to get one word
    getline(in,st2);//will print first line
    getline(in,st2);//will print second line
    cout<<st2 ;
    return 0;
}