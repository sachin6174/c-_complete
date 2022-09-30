#include <iostream>
//2,147,483,647
using namespace std;
#define lli  long long int  // first variable and then dattype


lli fac(lli const &n){
    cout<<endl<<&n<<" "<<n;

if(n==0){
    return 1;
}

    // fac(0)=1;
 lli b=fac(n-1);
 int k;
 cin>>k;
return n*b;

// fac(n)=n*n-1;

}
int main()

{
//   int *p = &(fac(20));
//   cout<<(&(fac(20)));
    int n;
    cin>>n;
    cout<<&n<<" "<<n;
    cout<<endl;
   cout<< fac(n);
    return 0;
}