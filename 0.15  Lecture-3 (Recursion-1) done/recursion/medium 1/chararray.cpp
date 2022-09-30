#include <iostream>
//2,147,483,647
using namespace std;

int main()
{
    //character pointers also behaves differently

    int a[] = {1, 2, 34};
    // yeha a kya hai "a " address of 0st element of array

    int *a1;
    cout<<a1<<endl;// it given me address
    cout<<*a1<<endl;// gime me present binary string at address of a1
    cout<<*(a1+1)<<endl;// it given me address


    char *p;
    cout << p<< endl; // expecing address like a hexadecimal number
      cout<<&(*p)<<endl;


    // pointer us location par jate hai aur print karna suru kar dete hai data ko jab tak null character nahi milta;

    // every pointer just print till not get the null character;
    // we can not get an address of character array or pointer printed on the console or terminal.
    cout<<*p<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;


    // null character \0

    char b[]="sachin";
    cout<<b<<endl;// will print sachin
    cout<<&b[0]<<endl;// will print sachin
    cout<<&b[1]<<endl;// will print achin
    
    cout<<sizeof(b)<<endl;

    cout<<"\0"<<endl;
    // cout<<NULL<<endl;// it is actually zero or pointing to no address; used for initalizing pointers if ew do not want to have a garbadge address in  the vaiables .

    char *c="long";
    cout<<c<<endl;//ye kyakarega long likh  dega
    cout<<&c<<endl;
    cout<<*c<<endl;//ye kyakarega l likh  dega
    return 0;
}