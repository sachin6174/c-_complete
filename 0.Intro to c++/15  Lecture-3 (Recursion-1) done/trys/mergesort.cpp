// #include<bits/stdc++.h>
#include<iostream>
#include"bits.cpp"
using namespace std;

int *helper=new int[100000];
void mergesorted(int *sorted, int* a1,int s1,int e1,int* a2,int s2,int e2){

    int i=s1;// for first array
    int j=s2;// for second array
    int z=s1;// for helper array
    while(a1[i]<a2[j]){
        helper[z++]=a1[i];
        i++;
    }
    while(a1[i]>a2[j]){
        helper[z++]=a2[j];
        j++;
    }
    if(i!=e1+1){
        helper[z++]=a1[i++];
    }
    if(j!=e2+1){
        helper[z++]=a2[j++];
    }
    int sortexindex=0;
    for(int s=s1;s<z;s++){
        sorted[sortexindex++]=helper[s];
    }
}

int main (){
    int a[5]={1,4,2,5,7};
    int b[2]={0,12};
    int sorted[1000];
    mergesorted(sorted,a,0,4,b,0,1);
    for(int element:sorted){
        cout<<element<<" ";
    }
    delete helper;


}