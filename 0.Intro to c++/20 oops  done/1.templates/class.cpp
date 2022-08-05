#include <iostream>
#include <string>
using namespace std;

template <class T, class L> // multiple template
class myclass
{
public:
    T a;
    L b;
    myclass(T a, L b)
    {
    }
};
template <typename T>
void addswap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    myclass<int, string> a(12, "sachin");
    myclass<int, int> a1(12, 21);
    string a = "sachin";
    string b = "bunty";
    addswap<string, string>(&a, &b);
    cout << a << " " << b;
}