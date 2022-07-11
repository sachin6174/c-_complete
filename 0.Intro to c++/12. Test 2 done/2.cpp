#include<iostream>
// #include "solution.h"
using namespace std;
#include<bits/stdc++.h>





int lengthfinder(char input[],int s,int e){
   int  length=0;
    while(s<=e){
        length++;
        s++;
    }
    return length;
    
}

void minLengthWord(char input[], char output[]){
		
	// Write your code here	
    int minlen=0;
    int size=strlen(input);
    int i=0;
	int arr [size];
    int arri=0;
    while(i<size){
        if(input[i]==' '){
            arr[arri]=i;
            arri++;
        }
        i++;
    }
    cout<<endl;
    i=0;
    // while(i<arri){
    //     cout<<arr[i]<<' ';
    //     i++;
    // }
    i=1;
    int s=0;
    int e=arr[0];
    int lengths[size];
    int li=0;// iterator
    cout<<endl;
    while(i<arri){
     	lengths[li]=lengthfinder(input,s,e-1); 
         li++;
        s=e+1;
        e=arr[i];
        i++; 
    }
    i=0;
    int minval=INT_MAX;
    while(i<li){
        // cout<<lengths[i]<<' ';
        minval=min(minval,lengths[i]);
        i++;
    }
    // cout<<minval;
    int no=0;
    i=0;
    int s=0;
    while(i<size)
        s=i;
        while(input[i]!=' '){
            no++;
            i++;
        }
        s=i;
        if(no==minval){
            cout<<
        }
    }


    // return 
    

}
int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
