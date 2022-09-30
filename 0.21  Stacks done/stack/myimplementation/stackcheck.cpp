#include <iostream>
//2,147,483,647
using namespace std;
#include<stack>

bool balanced (string s){

    stack <char> a;
    int i = 0;
    for (; i < s.size(); i++)
    {
        if (s[i]=='{'||s[i]=='('||s[i]=='['){
            a.push(s[i]);
            i++;
        }
    }
    if(a.top()=='{'){
        if(s[i]=='}'){
            i++;

            // return true;
            
        }else{
            return false;
        }
    }
    if(a.top()=='['){
        if(s[i]==']'){
            i++;
            
            // return true;
            
        }else{
            return false;
        }
    }
    if(a.top()=='('){
        if(s[i]==')'){
            i++;
            
            // return true;
            
        }else{
            return false;
        }
    }

    if(i==a.size()){
        return true;
    }else{
        return false;
    }

    
}

int main()
{
    string s;
    cin>>s;
    cout<<balanced(s);
    return 0;
}