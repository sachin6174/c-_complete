#include <iostream>
using namespace std;

void Rf(int array[],int n){
    // int p=array[0];
    if(n==0){  return;}
    cout<<array[n-1]<<" ";
    
    Rf(array,n-1);
}

int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<endl;
    Rf(array,n);
    return 0;
}