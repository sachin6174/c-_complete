#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "tell me your age:" << endl;
    cin >> age;
    cout << "You entered " << age << endl;

    switch (age)
    {
    case 0:
        cout<<"you are 0 years old"<<endl;

        break;
    case 18:
        cout<<"you are 18 years old"<<endl;
        break;          

    default:
    cout<<"no special"<<endl;
        break;
    }
    cout<<"its over"<<endl;
    return 0;
}