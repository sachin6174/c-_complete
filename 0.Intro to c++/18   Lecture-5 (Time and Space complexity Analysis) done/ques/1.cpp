#include <iostream>

//largest element of an array 
using namespace std;

void takeinput(int array[], int n)// this should be like this int array[]
{
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }    
}

void printarray(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<< "  ";
    } 
}
int largestele(int array[], int n){
    int max=array[0];

    for (int i=0;i<n;i++)
    {
        if(max<array[i])
    {
        max=array[i];

    }
    }
    return max;
}


int largestrecur(int array[], int n){
if(n==0){ return -1;}
if(n==1){return array[0]; }

int smalloutput=largestrecur(array+1,n-1);
if (smalloutput<array[0]){
    return array[0];
}
return smalloutput;
}


int main()
{
     int n;
    cin>>n;
     int array[n];
     takeinput(array,n);
     printarray(array,n);
     cout<<endl;
     cout<<largestele(array,n)<<endl;
     cout<<largestrecur(array,n);

    return 0;
}