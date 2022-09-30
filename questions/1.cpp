#include <iostream>
using namespace std;
# define usi unsigned short int

//a pens(x unit money perpen) b pencils(y rupees perpen )
 int main() {
	// your code goes here
	usi t;
    cin>>t;
	while (t--){
	    usi a,b,x,y;
	    cin>>a>>b>>x>>y;
	    cout<<(a*x+b*y);
	}

	return 0;
}
