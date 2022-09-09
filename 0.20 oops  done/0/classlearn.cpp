#include <iostream>
using namespace std;

class details{
    public:

int rollnumber;//4
float favno;//4
const char* name[];//12
//  char* name[10];
// string name;

};

int main()
{
    details *robin=new details;
    (*robin).name[20]="robin";
    (*robin).name[20]="robin singh";

    cout<<(*robin).name[20]<<endl;// it is giving me address

    details rohan;
    rohan.name[10]="rohan";
    cout<<rohan.name[10]<<endl;
    return 0;
}