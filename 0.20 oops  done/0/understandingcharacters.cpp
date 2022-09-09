#include <iostream>
using namespace std;

int main()
{
  /*  // char data type:
    char letter='sa';//multicherecter not allowed
    char letter2=' ';//multicherecter not allowed
    // cout<<sizeof(letter);
    char l1='!)';
    // cout<<sizeof(letter);
    char l4='`';
    // cout<<sizeof(l1);
    char l2='1';// it is printing something else
    // cout<<sizeof(l2);
    char l='/]';//overflow condition
    // cout<<sizeof(l);
    cout<<l2;
    cout<<endl<<l<<endl;
    cout<<letter<<endl;
    cout<<letter2<<endl;
    // cout<<letter<<" "<<l1<<" "<<l2<<" "<<l<<" "<<l4;

*/
    // character array:

    char name[]="sachin\0";
    // char name1[5]="sachi";//this will give error as we can store only n-1 elements in a n sized character array and last space is reserved for null character \0

cout<<sizeof(name)<<endl;
// cout<<sizeof(name1)<<endl;


    return 0;
} 