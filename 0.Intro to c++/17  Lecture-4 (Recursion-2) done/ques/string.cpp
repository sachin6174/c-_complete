#include <iostream>
using namespace std;
#include<string.h>

int main()
{
    /*
    string a="sachin";
    cout<<a<<endl;
    a="bunty";
    cout<<a<<endl;
    */

  /* string a1;//there is no scene of garbadge value in strings it will just print nothing.
//    a1="ram";
   cout<<a1<<endl;
   */

  //creating dynamic string 
  string *p= new string;
  cout<<&p<<endl;
  cout<<p<<endl;
  cout<<*p<<endl;// will give garbadge value
  cout<<&(*p)<<endl;
  *p="67866";
  cout<<*p<<endl;


  //taking string input
/* string k;
  cin>>k;
  cout<<k<<endl;
    k="raj";
    cout<<k;

    string d;

    cout<<endl;
getline(cin, d);
cout<<d<<endl;
*/

   

//    considering it as aa a string;
string g="robin";
cout<<g[0]<<endl;
g[0]='s';// single character in single quote ,
cout<<g<<endl;

string s1="sac";
string s2="hin";
// s1=s1+s2;
s1+=s2;
cout<<s1<<endl;// will print sachin

cout<<s1.size()<<endl;
cout<<s1.substr(3)<<endl;
cout<<s1.substr(2,2);
}