#include <iostream>
using namespace std;
class details{
    public:

int rollnumber;//4
float favno;//4
// char name [10];//12
//  char* name[10];
string name;

};
int main()
{
    details *robin =new details;
    // cout<<sizeof(robin)<<endl;
    cout<<&(*robin)<<endl;
    cout<<sizeof(*robin)<<endl;
    (*robin).rollnumber=20;
    (*robin).favno=2.7;
    (*robin).name="robin";
    cout<<sizeof( (*robin).name)<<endl;


    return 0;
}