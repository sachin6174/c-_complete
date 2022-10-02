//user defiuned size of array
//finding the last element
#include <iostream>
using namespace std;

int main()
{ 
    
    // double *p= new double[n];
    
   
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int  *p= new int[n];


    cout<<"enter the values of elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>p[n];
    }
     int largest=-1;// the value of element of array can also be 0
     for (int i = 0; i < n; i++)
     {
         
        if(largest<p[i])
        {
            largest=p[i];
        }

        
     }
     
    cout<<"The largest element is "<<largest<<endl;


    return 0;
}
// we can find to get max(largest) element in array