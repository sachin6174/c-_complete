/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
12345
31203
2123
Output
15
9
8
*/
#include <iostream>
using namespace std;

int main() {
	int T;
	int N;
  cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N;
      cout<<(N%10)+((N/10)%10)+(((N/10)/10)%10)+((((N/10)/10)/10)%10)+(((((N/10)/10)/10)/10)%10)+((((((N/10)/10)/10)/10)/10)%10)<<endl;
	}

	return 0;
}
