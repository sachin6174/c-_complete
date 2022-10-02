#include <iostream>
using namespace std;

//made function for every for loop

void linearsearch(int array[], int n, int k){
    for (int  i = 0; i < n; i++)
    {
        if (array[i]==k)
        {
            cout<<i<<endl;
        }
    }// // give me all index
}

void put_array_element(int array[],int n){
 for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }// took elements of array by user
}

void dispaying_stored_array(int array[],int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<array[i]<<"\t";
    }// display what user put in elements
}


int main()
{
    int n;// number of elements of array
    cin>>n;// value of n taken by the user
    int array[n];//array declearation of n size 
    
    put_array_element(array, n);

    cout<<endl<<endl;

    dispaying_stored_array(array,n);
    
    cout<<endl<<endl;
    int k;//decleraing which number to be searched
    cin>>k;// took no which need to be searched by user 
    cout<<endl<<endl;

    linearsearch(array, n, k);
    
    return 0;
}