#include <iostream>
using namespace std;
void cin_get(char* );
void get_line(string );

int main()
{
    string str1;
    
    char str[100];

    cout<<"Ente  first  sentence:\n";
    getline(cin,str1);// get line should be cind first otherwise will throew error

    cout<<"Ente another sentence:\n";
    cin.get(str,100);

    cout<<endl;
    get_line(str1);
    cin_get(str);
    
    return 0;
}

void cin_get(char sentence[])
{
    // cout<<"Ente a sentence:\n ";
    // cin.get(sentence,100);
    cout<<sentence<<endl;

}

void get_line(string sentence){

    // cout<<"Ente a sentence:\n ";
    // getline(cin,sentence);
    cout<<sentence<<endl;
}