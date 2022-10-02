//sending datd by reference
#include <iostream>
using namespace std;

void incrementkarde(int &n);//this is called as function prototype

int main()
{
    int p=5;
    incrementkarde(p);// now changes will reflect
    cout<<p<<endl;
    
    return 0;
}
void incrementkarde(int &n){
    n++;
    // cout<<n<<endl;

}