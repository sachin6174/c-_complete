#include <iostream>
//2,147,483,647
using namespace std;

inline void takeInput(int *l, int n, int p)  // we can make functions inline yeeee`
{
    cout<<l<<endl;
    cout<<&n<<endl;
    cout<<"addressofp"<<&p;
    // if (n == 0)
    // {
    //     return;
    // }
    // cin >> a[0];
    // takeInput(a + 1, n - 1);
}

void printarray(int *a, int n,int p)
{
    cout<<a<<endl;// a address hota hai so a pointer can take the address
    cout<<&n<<endl;//same address as takeinputfunction

    cout<<"addressofp"<<&p;
    // if (n == 0)
    // {
    //     return;
    // }
    // cout << a[0] << " ";
    // printarray(a + 1, n - 1);
}

void recieve (int p){
    cout<<"addressofprecieve"<<&p<<endl;
 p=50;
    cout<<p<<endl;
    
}
void recieve2 (int p){
    cout<<"addressofprecieve"<<&p<<endl;
    // p=10;
    cout<<p<<endl;
   
}
int main()
{
    int a[100];
    cout<<"array adress main "<<a<<endl;;
    int n;
    cout<<" adress n "<<&n<<endl;;

    cin >> n;
    int p;
    cout<<"addressofpmain "<< &p<<endl;
    takeInput(a, n,p);
    cout<<endl;
    printarray(a, n,p);
    cout<<endl;
    recieve(p);
    cout<<endl;
    recieve2(p);

    return 0;
}