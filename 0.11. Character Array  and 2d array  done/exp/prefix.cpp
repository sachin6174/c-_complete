//#include <iostream>
#include <stdio.h>
// compile://g++ test_code.cpp
// run://a.exe < input.txt > output.txt
#include <bits/stdc++.h>
#define ll long long
#define vec vector
#define ar array
// just Throw hash map
// Pick the global decleration
// delete the dynamic allocation
// os_base::sync_with_stdio(0);
// cin.tie(0);
using namespace std;

//

void my_machine(char *a)
{
    int i = 1;
    int length = strlen(a);
    while (i < length + 1)
    {
        char temp = a[i];
        a[i] = '\0';
        cout << a << char(10);
        a[i] = temp;
        i++;
    }
}

void generate(char * input){
    
    char *a=input;
        int length = strlen(input);
    
    	int i= length -2;
    	while(i>=0){
            
            if(a[i]==' '){
                char temp = a[i];
                a[i]='\0';
                a=&(a[i+1]);
                cout<<a<<endl;
                a[i]=temp;
                a=input;
            }
            
            i--;
        }
        cout<<input<<endl;
}

void printSubstrings(char input[]) {
    // Write your code here
    char *p=input;
    int i=0;
    while(i<strlen(input)){
        generate(input+i);
        // p=input;
        i++;
        
    }
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[100];
    for (int i = 0; i != 100;)
    {
        arr[i] = rand() / 1000;
        i++;
    }
    // for(int i=0;i!=100;){
    // cout<<arr[i] <<'	';
    //  i++;
    // }
    char p[1000];
    cin>>p;
    printSubstrings(p);
   
     return 0;   
    }