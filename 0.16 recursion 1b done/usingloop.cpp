
#include <iostream>
using namespace std;
#include<cstring>
void pairStar(char input[]) {
    int size=strlen(input);
    int i=0;
    while(i<size){
        if(input[i]==input[i+1]){
        int p=strlen(input)-1;
            while(p>=1){
                input[p+1]=input[p];
                p--;
            }  
        input[strlen(input)+1]='\0';
        input[i]='*'; 
        }
        i++;
    }
}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

