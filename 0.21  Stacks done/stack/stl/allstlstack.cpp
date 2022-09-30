#include <iostream>
//2,147,483,647
using namespace std;
#include<stack>

void printstackrecursively(stack<int>s){// printing bottom to top using recursion

    if(s.empty()==true){
        return;
    }

    int temp=s.top();
    s.pop();
    printstackrecursively(s);
    s.push(temp);
    cout<<s.top()<<" ";
}

int main()
{   

    stack<int> s;
    stack<int> s1;
    s1.push(100);
    s.push(3);
    cout<<endl<<"size  "<<s.size()<<endl;

    printstackrecursively(s);
    cout<<endl;
    s.push(10);

    printstackrecursively(s);
    cout<<endl;

    s.emplace(2);// add newelement
    printstackrecursively(s);
    cout<<endl;

    s.pop();
     printstackrecursively(s);
    cout<<endl;
    cout<<endl<<"size  "<<s.size()<<endl;

    s.swap(s1);
     printstackrecursively(s);
    cout<<endl;
     printstackrecursively(s1);
    cout<<endl;

    return 0;
}