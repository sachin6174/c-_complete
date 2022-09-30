#include <iostream>
using namespace std;
void incrementkarde(int n){
    n++;
    cout<<n<<endl;

}
int main()
{
    int p=5;
    incrementkarde(p);// ye nahi karga 1+ p me //kyuki usne ye kam n ke address me kia hai p me nahi kia hai
    cout<<p<<endl;
    
    return 0;
}