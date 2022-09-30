#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int N;
	int ans=0;
	for (int i=0 ; i<T; i++) {
	    cin>>N;
        int r=N%10;
        if(r==4)
        {ans++;}
        N=N/10;
	}
cout<<ans<<endl;




//     int ans=0;
//     int n=444;
// while(n>0)
// 	    {
// 	        int r=n%10;//r=4//r=4//r=4
// 	        n=n/10;//n=44 //n=4//n=0
// 	        if(r==4)
// 	        {
// 	            ans++;//1//2//3
// 	        }
// 	    }
//         cout<<ans<<"\n";
// 
}
