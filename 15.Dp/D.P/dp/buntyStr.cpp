#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
void reversestring(string &str){
    // cout<<(str).size()-1<<endl;
    // (str)[0]='l';
    for (int i = 0; i < (str.size())/2; i++)
    {
        char temp  =str[i];
        str[i]=str[str.size()-1-i];
        str[str.size()-1-i]=temp;
    }
}
int main()
{
    string str = "sachin";//nihcas
    reversestring(str);
    cout<<str;
    return 0;
}