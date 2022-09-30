#include <iostream>
using namespace std;

int main()
{
    /*
    int arr[]={2,3,4,5,6};
    for (int i = 0; i < 5; i++)
    {
        arr[i]=arr[5-1-i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i] ;
    }
    return 0;
    *///code for not a user defined array

    int n;
    cin>>n;
    int *p=new int[n];
    // int p[10];// for stack memory
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }

    for (int  i = 0; i <= (n/2); i++)  //if n at n/2 the it will be back to same arrayt again
    {       int temp=p[i];
        p[i]=p[n-1-i];
        p[n-1-i]=temp;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    delete [] p;
    
}