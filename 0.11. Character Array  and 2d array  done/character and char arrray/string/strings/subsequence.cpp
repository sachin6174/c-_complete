#include <iostream>
//2,147,483,647
using namespace std;
#include<algorithm>
#include<bits/stdc++.h>
#include<cmath>// pow fun present in this

int subsequence(string s,string outputarray[]){

    if(s.size()==0){
        outputarray[0]="";
        return 1;// ek subsequence
    }
    int small=subsequence(s.substr(1),outputarray);
    for (int i = 0; i < small; i++)
    {
        outputarray[small+i]=(s[0]+outputarray[i]);
    }
    return 2*small;



}

int main()
{
    string s;
    cin>>s;
    int size=pow(2,s.size());
    string *outputarray=new string [size];
    int count =subsequence(s,outputarray);
    for (int i = 0; i < count; i++)
    {
        cout<<i <<  outputarray[i]<<" ";
    }
    delete []outputarray;
    int a;
    cin>>a;

    return 0;
}