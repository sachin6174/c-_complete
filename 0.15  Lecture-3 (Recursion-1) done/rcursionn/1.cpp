#include <iostream>

using namespace std;

#include<cstring>
int i=0;
bool checkAB(char input[]) {
	// Write your code here
    if(i==0){
     if(input[0]!='a'){
            return false;
         }
        i++;
    }
    
	if(strlen(input+1)==0){
        cout<<1<<endl;;
		return true;
	}
    
    if(strlen(input+1)>0){
        
        if((input+1)[0]=='a'){
            cout<<"k"<<endl;
            checkAB(input+1);
        }
        
        else if((input+1)[0]=='b' && (input+1)[1]=='b'){
            cout<<"l"<<endl;
            checkAB(input+2);
        }
        else{
            cout<<2<<endl;
            return false;
        }
    }

}
int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}