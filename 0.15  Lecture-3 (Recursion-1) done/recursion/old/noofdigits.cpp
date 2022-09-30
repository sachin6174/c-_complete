#include <iostream>
using namespace std;

int number_of_digits(int n){
if (n/10==0){return 1;}
int smalloutput=number_of_digits(n/10) ;
return smalloutput+1;
}

int main()
{
   cout<< number_of_digits(100);
    
    return 0;
}