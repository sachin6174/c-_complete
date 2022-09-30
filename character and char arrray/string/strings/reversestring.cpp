#include <iostream>
//2,147,483,647
using namespace std;

void reverse(string s){
    if(s.size()==0||s.size()==1){
        return;
    }
    char temp=s[0];
    reverse(s.substr(1));
    cout<<s<<endl;
    
    s[s.size()]=temp;
}

int main()
{
    string s;
    cin>>s;
    reverse(s);
    cout<<s;

    return 0;
}