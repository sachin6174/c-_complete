#include <iostream>
using namespace std;


int lcm2no(int a , int b)
{
    int lcm=0;
    int l=0;
    int m=min(a,b);
    for (int i = m; l<1; i++)
    {
        if (i%a==0&& i%b==0)
        {
            lcm=i;
            l++;

        }
    }
    
return lcm;
}

int main()
{
    cout<<lcm2no(5,10);
    return 0;
}