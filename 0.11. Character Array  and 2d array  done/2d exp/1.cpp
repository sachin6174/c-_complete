//#include <iostream>
#include<stdio.h>
//compile://g++ test_code.cpp
//run://a.exe < input.txt > output.txt
#include<bits/stdc++.h>
#define ll  long long
#define vec vector  
#define ar array  
//just Throw hash map
//Pick the global decleration
//delete the dynamic allocation
//os_base::sync_with_stdio(0); 
//cin.tie(0);  
using namespace std;
#define no_of_arry 9
#define size_of_1_array 9

void my_machine(){

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[no_of_arry][size_of_1_array]={{0}};
    int i=0,j=0,a=0;

    while (i<no_of_arry)
    {   
        if(a==0){
            int l=0;
            cout<<"  ";
            while(l<size_of_1_array){
                cout<<l<<' ';
                l++;
                
            }
            cout<<endl;
        }
        a++;
        cout<<i<<' ';
        while (j<size_of_1_array)
        {
            arr[i][j]=rand ()%10;
            cout<<arr[i][j]<<' ';
            j++;
        }
        j=0;


        i++;
        cout<<char(10);
        
    }

    return 0;
}