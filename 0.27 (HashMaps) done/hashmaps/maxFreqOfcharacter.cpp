#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include<algorithm>

int main()
{
    string s="saaaagggchin";
    cout<<s<<endl;
    // cout<<(*s)<<endl;//error
    
    cout<<&s<<endl;
    int v[256]={0};
    int i=0;
    while (i<s.size())
    {
        v[int(s[i++])]++;
    }
    cout<<char(v[*max_element (v,v+256)]);
    

    // cin>>s;
    return 0;
}