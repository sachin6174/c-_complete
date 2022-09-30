//we will use structures to make array adts
#include <iostream>
using namespace std;
#include <array>
// //structures are used to make a custom datatypes in c++/c
// struct myarray
// {
//     int Total_size; //memory reserved
//     int Used_size;  //memory to be used
//     int *ptr;//points to first element of arraay
//     // cout<<&(Total_size)<<endl;
// };

int main()
{
    // cout << &(Total_size) << endl;
    // struct myarray marks;
    int arry[10];
    arry [0]=34;
    for (int i = 0; i < 15; i++)
    {
    cout<<&arry[i]<<endl;
        /* code */
    }
    cout<<&arry<<endl;
    cout<<arry<<endl;
    cout<<arry[0]<<endl;

    cout<<*(arry)<<endl;//ththis will contain value of index 0;

    


    return 0;
}