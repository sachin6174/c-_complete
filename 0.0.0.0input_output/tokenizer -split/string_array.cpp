#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    char b[]="sachin is a boy";

    //strtok is in cstring headerfile
    vector<string>v;

    char* ptr=strtok(b," ");
    while(ptr!=NULL){
        v.push_back(ptr);
        cout<<ptr<<endl;
        ptr=strtok(NULL," ");
    }
    vector<int>v1;
    for(string element : v ){
        v1.
    }

  return 0;
}
