#include <iostream>
using namespace std;
// 1d array
/*
int main()
{
    int arry[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"element of index "<<i<<" is ";
        cin>>arry[i];
        
    }

    for (int i = 0; i < 5; i++)
    {
           cout<<"element of index "<<i<<" is "<<arry[i]<<endl;

    }
    
    
    
    return 0;
}
*/

// 2d in stack
int main()
{
        //  int ar[];// it is compulsory to give size of a empty array
    int array[2][4];
    for (int i = 0; i < 2; i++)// use i=1 and i<=2 to more visualize the matrix better
    {
        for (int j = 0; j < 4; j++)// use j=1 j<=4 to more visualize the matrix better
        {
            cout<<"the element at location "<<i<<","<< j<<" is ";
            cin>>array[i][j];
        }
        
    }
    cout<<"\n"<<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"the element at location "<<i<<","<< j<<" is "<<array[i][j]<<endl;;
           
        }
        
    }
    
    return 0;
}