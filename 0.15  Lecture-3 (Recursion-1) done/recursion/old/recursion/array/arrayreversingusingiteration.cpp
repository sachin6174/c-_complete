#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int iter =0;
    for (int i = 0;i< (n/2); i++)
    {
        int temp= array[i];
        array[i]=array[n-1-i];
        array[n-1-i]=temp;
        iter++;
    }
    cout<<iter<<endl;// number of iteration eeded
     for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    
    return 0;
}