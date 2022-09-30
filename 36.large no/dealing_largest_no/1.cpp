#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    string str1="1234";
    string str2="9999";
    
    // cout<<str1[3]<<endl;
    int a1=str1[3]-'0'; //convert a char in int value 0=48 in ascai
    cout<<a1<<endl;
    int a2=str2[3]-'0';
    cout<<a2<<endl;
    string add;

    // for (int i = 0; i < 3; i++)
    // {
    //     add. push_back ( (str2[3]-'0'+str2[3]-'0')%10);
    //     char carry= (str2[3]-'0'+str2[3]-'0')/10;
    // }

     add. push_back (int ( ((str2[3]-'0')+(str2[3]-'0'))%10));
     cout<<add[0]<<endl;
    char carry= ((str2[3]-'0'+str2[3]-'0')/10)-'0';
    
    cout<<carry<<endl;
    return 0;
}