#include <iostream>
using namespace std;

int main()
{
    //3*4
    int **p=new int *[3];
     for (int i = 0; i < 3; i++)
     {
         p[i]=new int[4];
     }
     
     for (int i = 0; i < 2; i++)// use i=1 and i<=2 to more visualize the matrix better
    {
        for (int j = 0; j < 4; j++)// use j=1 j<=4 to more visualize the matrix better
        {
            cout<<"the element at location "<<i<<","<< j<<" is ";
            cin>>p[i][j];
        }
        
    }
    cout<<"\n"<<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"the element at location "<<i<<","<< j<<" is "<<p[i][j]<<endl;;
           
        }
        
    }
// deleting the heap memory in case of 2d array
for (int i = 0; i < 4; i++)
{
    delete [] p[i];
}
 delete []p;
// deleted all the things

    return 0;
}