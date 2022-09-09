#include <iostream>
using namespace std;

class details{
    public:

int rollnumber;//4
float favno;//4
char name [30];//
//  char* name[10];
// string name;
};

int main()
{
    details *robin =new details;
    cout<<sizeof(*robin)<<endl;
    // (*robin).name="Gangadhar Mayadhar OmKarnath shastri";
    // cout<<(*robin).name<<endl;
    cout<<sizeof((*robin).name)<<endl;
    // cout<<name.capacity<<endl;

    char a[10];

    cin>>a;
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;
    char b[]="raju";
    cout<<b<<endl;
    cout<<sizeof(b)<<endl;
    
    return 0;
}