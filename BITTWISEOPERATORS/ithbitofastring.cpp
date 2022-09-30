#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>
#include<algorithm>
#define lli  long long int


void  convertbinary(lli n){
    //12345
    vector <int> digit;
    for (int i = 0; n>0; i++)
    {
        digit.push_back( n%2);
        n=n/2;
        // cout<<digit[i]<<" ";
    }
    reverse(digit.begin(),digit.end());
    for (int j = 0; j<digit.size(); j++)
    {
        cout<<(digit[j])<<" ";
    }
}
void binary_conversion_using_bitoperators(int a){
vector <int> digit1;

    for (int  i = 0; (a>>i)>0; i++)
    {
       digit1.push_back((a>>i)&1);
    }
    reverse(digit1.begin(),digit1.end());

    for (int j = 0; j<digit1.size(); j++)
    {
        cout<<(digit1[j])<<" ";
    }


}
int main()
{
    //ith bit of 123 ki binary string ka
    
    int a=123;
    // cout<<whichbit you want
    convertbinary(a);

    cout<<endl<<((a>>3)&1)<<endl;

    binary_conversion_using_bitoperators(a);
    
    
    return 0;
}