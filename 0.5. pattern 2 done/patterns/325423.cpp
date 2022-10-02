#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i=1;
    cin>>n;
    int ascai=65+n;
    while(i<=n){
    	int j=1;
        // int newas=ascai;
            int k=ascai;
    	while(j++<=i){
            cout<<char(k-1); 
           	k++;
        }
        ascai--;

        cout<<"\n";
        i++;

    }
}

