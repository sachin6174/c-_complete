#include<iostream>
using namespace std;

// Given a Number N, check if it is prime!
// Logic: Find atleast 1 divisor in the range 2 to N-1 to prove a no is not prime

int main(){

	int N;
	cin>>N;
	int i;
	
	for(i=2; i<=N-1; i++){
		if(N%i==0){
			cout<< N <<" is NOT Prime";
			break;
		}
	}
	//Prime
	if(i==N){
		cout << N <<"is prime";
	}


	return 0;
}