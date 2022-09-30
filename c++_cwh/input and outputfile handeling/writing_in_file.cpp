
#include <iostream>
#include <fstream> //for file input and output stream
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

    //writing in file
    string st = "sachin kumar";
    //open file using constructor
    ofstream out("sample.txt"); //to do write operation
    out << st;

    return 0;
}