#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>
void removeX(char a[]){
    if(a[0]=='\0'){ return ;}
    // char temp= a[0];
   
    if (a[0]!='x')      
    {   removeX(a+1);
    }
    else{
        int i = 1;
        for (; a[i]!='\0'; i++)
        {
            a[i-1]=a[i];
        }
        a[i-1]=a[i];
        removeX(a+1);
    }
    
    
}

int main()
{
    
    char a[100];
    cin>> a;

    removeX(a);
        cout<<a;
    return 0;
}

// #include <iostream>
// //2,147,483,647
// using namespace std;
// #include<vector>

// int main()
// {
//      vector<char> v;
//      v.push_back('1');
//      v.push_back('g');
//      cout<<v[1];
//     return 0;
// }