
/*
Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.

Example
Input:
7 3
1
51
966369
7
9
999996
11

Output:
4
*/

#include <bits/stdc++.h> 

using namespace std;

int main() {
	
	int n, k;
	cin >> n >> k;

	
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		
		if (t % k == 0) {
           ans++;
		}		
	}

	cout << ans << "\n";	
		
	return 0;
}