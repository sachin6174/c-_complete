#include <iostream>
using namespace std;

// array size is user defined
// array elements is given by users
// the number we need to search is also given by user


int main()
{
    int n;// number of elements of array
    cin>>n;// value of n taken by the user
    int array[n];//array declearation of n size 
    
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }// took elements of array by user
    cout<<endl<<endl;

    for (int  i = 0; i < n; i++)
    {
        cout<<array[i]<<"\t";
    }// display what user put in elements
    cout<<endl<<endl;
    int k;//decleraing which number to be searched
    cin>>k;// took no which need to be searched by user 
    cout<<endl<<endl;

    for (int  i = 0; i < n; i++)
    {
        if (array[i]==k)
        {
            cout<<i<<endl;
        }
    }// // give me all index
    
    return 0;
}
// single time for loop laga hai to complexity O(n);
// this is also called liner serach using iterations