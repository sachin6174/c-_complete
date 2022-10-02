#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;

void solution(string s,string output){

    if( s==""){
        cout<<output<<" ";
        return;
    }

    solution( s.substr(1),output+s[0]);

    solution( s.substr(1),output);

}
void solution(string s){
    string output ="";
    return solution(s,output) ;
}


int main()
{
    string s="abc";
    // cin>>s;
    solution(s);
    return 0;
}