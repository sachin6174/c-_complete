#include <iostream>
using namespace std;
 
// `M × N` matrix
#define M 2
// #define N 5
 
// Dynamic Memory Allocation in C++ for 2D Array
int main()
{
    // dynamically create an array of pointers of size `M`
    int** A = new int*[M];
 
    // dynamically allocate memory of size `N` for each row
    // for (int i = 0; i < M; i++) {
    //     A[i] = new int[N];
    // }
 int N;
    // assign values to the allocated memory
    for (int i = 0; i < M; i++)

    {
        cin>>N;
        A[i] = new int[N];
        for (int j = 0; j < N; j++) {
            cin>>A[i][j];
            // A[i][j] = rand() % 100;
        }

         for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
     
    // print the 2D array
    // for (int i = 0; i < M; i++)
    // {

        
    //     for (int j = 0; j < N; j++) {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 

 cout <<A[0][0]<<endl;
 cout <<A[0][1]<<endl;
    // deallocate memory using the delete operator
    for (int i = 0; i < M; i++) {
        delete[] A[i];
    }
    delete[] A;
 
    return 0;
}