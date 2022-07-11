#include <iostream>
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

int kadane(int array[], int n){

    int sum=array[0];
    for (int i = 1; i < n; i++){
        if(sum>=0){   sum=sum+array[i];
        if(sum<0){   sum=0;}
        }
        
    }
    return sum;

}

int main()
{
    
    int n;
    cin>>n;
    int array[n];
    takeinput(array,n);
    printarray(array,n);
    cout<<endl;

    cout<<kadane(array,n)<<endl;

    return 0;
}