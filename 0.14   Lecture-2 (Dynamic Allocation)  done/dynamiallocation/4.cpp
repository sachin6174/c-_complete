//checking the heap memory alloction in task manager

#include <iostream>
using namespace std;

int main()
{
    
    // double *p= new double[n];
    
    int i=0;

    while(i<2)
    {
        int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    double *p= new double[n];
    
    }

    // cout<<"enter the values of elements:"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>p[n];
    // }
    //  int largest=0;
    //  for (int i = 0; i < n; i++)
    //  {
    //     if(largest<p[i])
    //     {
    //         largest=p[i];
    //     }
        
    //  }
     
    // cout<<largest<<endl;


    return 0;
}