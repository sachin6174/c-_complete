#include<bits/stdc++.h>
using namespace std;

vector<int> split(string str){
    vector<int>v;
    str.push_back(' ');
    for(int i=0;i<str.size();){   
        int j=i;
        for(;str[j]!=' ';j++ ){
        }
        int num=0;
        int f=1;
        for(int k=j-1;k>=i;k--){
            num+=f*(str[k]-'0');
            f*=10;
        }
        v.push_back(num);
        for(;str[j]==' ';j++ ){
        }
        i=j;
    }
    return v;
}

int main(){

    string str;
    getline(cin, str);
    // cout<<str;
    // cout<<endl;
    // fixing for last char
    str.push_back(' ');



    // actual algorithum
    for(int i=0;i<str.size();){   

        int j=i;
        for(;str[j]!=' ';j++ ){
        }

        //generating no
        int num=0;
        int f=1;
        for(int k=j-1;k>=i;k--){
            num+=f*(str[k]-'0');
            f*=10;
        }
        // cout<<num;
        //cout<<endl;


        for(;str[j]==' ';j++ ){
            // consecutive multiple spaces
        }

        //update i
        i=j;
        
    }

    vector <int> arr=split(str);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}
