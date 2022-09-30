#include <iostream>
using namespace std;

int main()
{
    
    int a[2][3]={11,22,33,44,55,66};

    cout<<a[0][0]<<endl;
    cout<<a[0][1]<<endl;
    cout<<a[0][2]<<endl;
    cout<<a[1][0]<<endl;
    cout<<a[1][1]<<endl;
    cout<<a[1][2]<<endl;

    cout<<endl;
    cout<<int(&(a[0][0]))<<endl;
    cout<<int(&(a[0][1]))<<endl;
    cout<<int(&(a[0][2]))<<endl;
    cout<<int(&(a[1][0]))<<endl;
    cout<<int(&(a[1][1]))<<endl;
    cout<<int(&(a[1][2]))<<endl;

    cout<<endl;

    cout<<int(a)<<endl;//address
    cout<<int(*a)<<endl;// address
    cout<<int(*(*a))<<endl;//dereference
    cout<<int(*a+1)<<endl;
    cout<<int(*a+2)<<endl;
    cout<<*(*a+2)<<endl;
    cout<<int(*a+3)<<endl;
    cout<<int(a+1)<<endl;

    cout<<endl;

    cout<<int(a+1)<<endl;
    cout<<int(*(a+1))<<endl;
    cout<<int(*(*(a+1)))<<endl;
    cout<<int(*(a+1)+1)<<endl;

    cout<<endl;
    cout<<int(*a)<<endl;


    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[2][3]={11,22,33,44,55,66};

//     cout<<int(*a+1)<<endl;
//     cout<<int(a+1)<<endl;

    
//     return 0;
// }