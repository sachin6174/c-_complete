#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>
void removex(char *a, vector<char>v){
    if(a[0]=='\0'){ return ;}
    // char temp= a[0];
   
    if (a[0]=='x')
    {
        for (int i = 0; i!='\0'; i++)
        {
            char tr=(a)[i+1];
            v.push_back(tr);
        }
            // cout<<v.size()<<" ";
    }
    
    else {

        // v.push_back (a[0]);
        for (int i = 0; i < i!='\0'; i++)
        {
            char la =a[i];
            v.push_back(la);
        }
            // cout<<v.size()<<" ";
    }  
    removex(a+1,v);
    cout<<v.size();
    
}

int main()
{
    vector<char>v;
    char a[100];
    cin>> a;

    removex(a,v);
        for (int i = 0; i < v.size(); i++)
        {
           cout<< v[i];
        }

    return 0;
}
