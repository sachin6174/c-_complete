#include <iostream>
//2,147,483,647
using namespace std;
# define lli long long int
#include<vector>
#include<algorithm>

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

int main()
{
   lli n;
    cin>>n;
    // n=~n;
    convertbinary(n);
    return 0;
}