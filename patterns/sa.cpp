#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i=1;
    cin>>n;
    int ascai=65;
    while(i<=n){
    	int j=1;
            // ascai++;

        int newas=ascai;
    	while(j++<=i){
            // ascai--;
            cout<<char(newas); 
            newas++;
            // ascai++;
        }
        ascai++;
        cout<<"\n";
        i++;

    }
}

