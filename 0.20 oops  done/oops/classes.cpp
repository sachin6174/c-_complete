//    classes have objects;
//    class hve function;
// it can be public ,private, protected
//a program to read only the private objects;

#include <iostream>
using namespace std;


class details{
    private:
    int phoneno;
    int email;

    public:
    char name[10];
    // string sentence;
    // getline(cin,sentence);
    int age;
    // string sentence;
    char profession [10];

    protected:
    char  gender [10];
    


    public:
    void getphoneno(){
        cout<<phoneno<<endl;
        return ;
    }
    int setphoneno(int a){
        return phoneno;
    }

};

int main()
{
    // int phoneno;
    details radha;//like int radha;
    radha.getphoneno();// phone number is protected but i am able to seeit due to a public function.
    radha.setphoneno(9501841);
    cout<<radha.setphoneno(9501841);
    return 0;
}