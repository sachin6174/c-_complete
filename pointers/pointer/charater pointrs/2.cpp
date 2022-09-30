#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<arr<<endl;// it will print address of 1st element of array.

    char a[]="abcd";
    cout<<a<<endl<<endl;//in char pointer not print address it print value
    cout<<&a[0]<<endl<<endl;// it will not print address but it will print value of complete string

    
    char b='a'; // we will give char b='\0'; it will print nothing or we can say nothing character
    cout<<&b<<endl;// this do not print addess of b will print value of b(as a string) and some garbadge then it will stop when find the null character i.e. \0

    return 0;
}