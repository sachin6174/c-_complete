#include <iostream>
// #include <cmath>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    // int a=5,b=6,c=7;
    int a,b,c,d,e;
    for (int  i = 0; i < t; i++)
    {
    cin>>a>>b>>c>>d>>e;
        /* code */
    
    
    // cout<<max({(a+b),(b+c),(c+a)})<<endl;// it is in algorithm header file
    int p=max({(a+b),(b+c),(c+a)});// it is in algorithm header file
    if (p<=d){
        int m=min({a,b,c});
        if (m<=e)
        {
            cout<<"YES"<< endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }
        
    }
    if(p>d){
        cout<<"No"<<endl;
    }
    }
    return 0;
}
/*
from sys import stdin, stdout

for _ in range(int(stdin.readline())):
    a, b, c, d, e = map(int, stdin.readline().split())
    l = sorted([a, b, c], reverse=True)
    
    carry = -1
    for i in l:
        if i <= e:
            carry = i
            l.remove(i)
            break
    
    if carry == -1:
        stdout.write("NO\n")
        continue
    
    if sum(l) <= d:
        stdout.write("YES\n")
    else:
        stdout.write("NO\n")

        */