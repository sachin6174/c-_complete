
#include <iostream>
using namespace std;
#include<cstring>
void pairStar(char input[]) {
    // Write your code here
    if(input[0]='\0'){
        return;
    }
    pairStar(input+1);
    if(input[0]==input[1]){
        int i=strlen(input);
        while(i>=1){
            input[i+1]=input[i];
            i--;
        }
        input[1]='*';
        
    }else{
        return;
    }

}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

