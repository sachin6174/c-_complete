#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int n;cin>>n;
    while (i<=n)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
// will print 1 infinite time

#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int n;cin>>n;
    while (i<=n)
    {
        cout<<i<<endl;
        i=i+1;
    }
    
    return 0;
}
// will print 1 to n
