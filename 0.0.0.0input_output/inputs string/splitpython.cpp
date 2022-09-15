#include<bits/stdc++.h>
using namespace std;

vector<int> split(string str){
    vector<int>v;
    str.push_back(' ');
    for(int i=0;i<str.size();){   
        int j=i;
        for(   ;str[j]!=' ';j++ ){
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
    string s;
    getline(cin,s);
    vector<int> v= split(s);
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    //1 2 3 4 5 6 7 8 9 10
    cout<<sum<<endl;
  return 0;
}
