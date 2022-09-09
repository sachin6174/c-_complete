#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

void solve(int a[][10],int m) {
        for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<char(10);    
    }
}

int main() {
    //2d vector 
    vector<vector<int>>v;
    for(int i=0;i<5;i++){
        vector<int>k(8,-1);
        v.push_back(k);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }



    // normal 2d static
    int a[5][10]={{0}};
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<char(10);    
    }
    // function call
    solve(a,5);



    int * *arr=new int* [5];
    for(int i=0;i<5;i++){
        int* temp=new  int[10];
        arr[i]=temp;
    }
    getch();
    
}