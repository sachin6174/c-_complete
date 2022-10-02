#include <iostream>
using namespace std;

int main()
{
    int n; //size of arrays
    cin >> n;
    int *p = new int[n]; // taking array in heap memory


    cout<<endl<<endl;
   
    for (int i = 0; i < n; i++)
    {
        *(p + i) = n - i;
        // cout << *(p + i) << " ";
    }
	
    cout<<endl<<endl;

    

    return 0;
}