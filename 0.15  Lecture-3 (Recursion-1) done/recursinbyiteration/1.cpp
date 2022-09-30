// factorial of a num iteratively
#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>

void  fact(int n){
    vector<int > v;
long long int    a=1;
for (int i = 1; i <= n; i++)
{
    a=a*i;
}
cout<<a<<endl;
}

int main()
{   int n;
    cin>>n;
    fact(n);
    return 0;
}