#include <iostream>
//2,147,483,647
using namespace std;
#include<algorithm>

int main()
{
    int a[]={1,2,15,7,4,4};

    sort(a,a+6);


    for (auto i = 0; i < 6; i++)
       cout<<a[i]<<" ";
        
    
    return 0;
}