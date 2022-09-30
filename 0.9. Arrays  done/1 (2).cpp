#include <iostream>
#define endl '\n'
#include<algorithm>
using namespace std;
// what to print 
//how much to print 
// print changer 

void f(int b[][5],int m,int n){
    int i=0;
    int it;
    
    it=0;
    while(it<n-1){
        int j=0;
        while(j<n-1){
            cout<<b[i][j]<<' ';
            j++;
        }
        break;
        it++;
    }

    i=0;
    it=0;
    while(it<m-1){
        int j=n-1;
        while(i<m-1){
            cout<<b[i][j]<<' ';
            i=i+n;
        }
        break;
        it++;
    }

    it=0;
    while(it<n-1){
        int j=0;
        while(j<n-1){
            cout<<b[i][j]<<' ';
            j++;
        }
        it++;
    }

    it=0;
    while(it<n-1){
        int j=0;
        while(j<n-1){
            cout<<b[i][j]<<' ';
            j++;
        }
        it++;
    }

        
}
int32_t main()
{   
    int a1[10];
    int *p1=a1;

    int a[7][5];
    int *l=*a;
    int l1=**a;
    // int **l3=a;
    // cout<<a<<endl;
    
    int i=0;

    while(i<7){
        int j=0;
        while(j<5){
            a[i][j]=rand()%10;
            // cout<<int (&(a[i][j]))<<' ';
            cout<< a[i][j]<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    i=0;
    while(i<7){
        int j=0;
        while(j<5){
            cout<<int (&(a[i][j]))<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    f(a,7,5);
    i=0;
    // while(i<7){
    //     cout<<int(a+i)<<endl;// 
    //     i++;
    // }
    // cout<<endl;
    // i=0;
    // while(i<7*3){
    //     cout<<int(*a+i)<<endl;// 
    //     i++;
    // }

    return 0;
}