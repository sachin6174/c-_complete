
#include <iostream>
using namespace std;

int main()
{
    int n;
    n=6;

    cin>>n;
    int a[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // int a[]={7,11,9,2,17,4};

int comp=0;
int swap=0;
for (int j =0;j <n-1 ; j++)//0,1,2,3
  { 
    
      
       for (int  i = 0; i < n-1-j; i++)
    {
        comp++;
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i]=a[i+1];
            a[i+1]=temp; 
            swap++; 
        } 

    }
    }

    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl<<"no of comparisons is "<<comp<<endl;
    cout<<endl<<"number of swaps "<<swap;
    return 0;
}