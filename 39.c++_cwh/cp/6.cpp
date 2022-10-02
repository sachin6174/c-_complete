/*
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1234
124894
242323

Output
5
5
5
*/


#include <iostream>
using namespace std;
int firstDigit(int n)
{
    // Remove last digit from number
    // till only one digit is left
    while (n >= 10)
        n /= 10;
     
    // return the first digit
    return n;
}

int main() {
	int T;
	int N;
  cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N;
	
      cout<<(N%10)+firstDigit(N)<<endl;
	}

	return 0;
}
