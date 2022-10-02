#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    int **p = new int *[2];
    int sizecol;
    for (int i = 0; i < 2; i++)
    {
        
        cin >> sizecol;
        // cout<<endl;
        p[i] = new int[sizecol];
        for (int j = 0; j < sizecol; j++)
        {
            cin >> p[i][j];
            // cout<<p[i][j]<<" ";
        }
        for (int j = 0; j < sizecol; j++)
        {
            cout<< p[i][j];
        }

        // cout<<endl<<endl;
        
    }
            // cout<<&(p[0][0])<<" ";
            // cout<<p<<" ";
            // cout<<*p<<" ";
            // cout<<(p+1)[0][0]<<" ";
    for (int  i = 0; i < 2;i++)
    {
        for (int j = 0; j < sizecol; j++)
        {
            cout<< p[i][j];
        }
    }
    

    
    return 0;
}