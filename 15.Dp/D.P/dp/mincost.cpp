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

void my_machine(){

    
}

int sum=0;

// int min_cost(int a[][3],int n){

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<a[i][j]<<" ";
//             sum=sum+a[i][j];

//         }
        
//     }
//     return 'a';
// }

int minCost(int  n ,int a[n][3]){
    // int a1;(0,0)
    // int a2;(0,1)
    // int a3;(1,0)

    // if()
    int mina1=minCost(n-1,a+1[0][3]);
    int mina2=minCost(n-1,a+1[1][3]);
    int mina3=minCost(n-1,a+1[1][3]);
    return min(mina1,mina2,mina3);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<a[0][0];
    cout<<minCost(3,a);
    // cout<<endl<<sum;

    return 0;
}