#include <iostream>
// to acti vate intellisence delete vscode folder in the workspace folder
//ISO C++ forbids converting a string constant to 'char*' // correct this error [-Wwrite-strings]
using namespace std;
class dash{
    
int a1;
int a2;
int a3;
int a4;
int a5=5;
char a6[10];
char a7[10];
char a8[10];
char a9[10];
// string a10;
char* a10;

public:
    void display(){
        cout<<   a1<<" "<<   a2<<" "<<   a3<<" "<<   a4<<" "<<a10<<" "<<a5;   
    }
    // writing defaut constructor
    dash(){

    }
    dash ( int a,int b,int c,int d,char e[]){
        a1=a;a2=b;a3=c;a4=d;
        a10=e;
    }
};
int main()
{
    // jis type ka cnstructor app call karna chahte ho wo likha hona chahie public region of class me
    //parameterized and default constructors;

    dash ki;
    // ki.display();
    ki.display();
    cout<<endl;
    dash sac(1,2,3,4,"sachin");// ek hiline me bahut sare properties ki value setho gai 
    sac.display();

    return 0;
}