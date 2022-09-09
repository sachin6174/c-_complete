#include<iostream>
using namespace std;


int main(){

	int calories = 1;
	int gf_calls_up = 10;

	while(calories<20){
		
		if(calories%5==0){
			cout<<"Well done" <<endl;
			calories++; //dont forget this statement otherwise you will end in a infinite loop
			continue;
		}

		cout<<"running & burning "<<(calories)<<endl;
		calories++;
	}

	cout<<"Out of the loop";


	return 0;
}