#include <iostream>
//2,147,483,647
using namespace std;


// void reversearray(string s){
//     if(s.size()==0){
//         return;
//     }
//     char temp=s[s.size()-1];
//     s.pop_back();
//     reversearray(s);
//     cout<<s.size();
//     // for (int i = s.size(); i >=0; i--)
//     // {
//     // }
//         s[s.size()]=s[s.size()-1];
//         s[s.size()-1]=s[s.size()-2];

    
//     s[0]=temp;    
   
// }
void doit(string s,int start , int end){
    if(start=end){
        return;
    }
    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;


    doit(s,start+1,end-1);  

}

int main()
{   
    // string changed;
    string s;
    cin>>s;
    
    // cout<<s[s.size()-1];
    doit(s,0,s.size()-1);
    cout<<endl<<s;
    return 0;
}