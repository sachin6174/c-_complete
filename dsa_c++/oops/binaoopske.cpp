#include <iostream>
using namespace std;


// i created my own data type

class sachin_details {
    private:
    int age=2;

    public:
    int favnum=6174;
    // char favsub[]="maths";
    double favmconst=3.1415926;
    void giveall(void){
    cout<< age<<" "<<favnum<<" "<<favmconst;
    return;
    }
};

void voidfun()// performs nothng arguments is also nothing
{
    return ;
}

int main()

{

    sachin_details sachin;
    // sachin.age=8;
    // cout<<sachin.age<<endl;
    sachin.giveall();

    voidfun();
    int maths=5;

    bool p=true;
    cout<<sizeof(p)<<endl;

    int sachin_details []={20,6174,maths,int(3.1415926)};
    for (int i = 0; i < 4; i++)
    {
        cout<<sachin_details[i]<<" ";
    }

    
    
    return 0;
}