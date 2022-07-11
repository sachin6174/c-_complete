#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int s1,int e1,int s2, int e2){
    int *c=new int [e2-s1+1];
    int s=s1;
    int e=e2;
    int z=0;
    while(s1<=e1&&s2<=e2){
        if(a[s1]<a[s2]){
            c[z++]=a[s1++];
        }else{
            c[z++]=a[s2++];
        }
    }
    while(s1<=e1){
        c[z++]=a[s1++];
    }

    while(s2<=e2){
        c[z++]=a[s2++];
    }

    int k=0;
    for(int i=s;i<=e;i++){
        a[i]=c[k++];
    }
    delete[]c;
}

void sort(int a[],int s,int e ){
    if(s>=e){
        return;
    }
    int mid =(s+e)/2;
    sort(a,s,mid);
    sort(a,mid+1,e);
    merge(a,s,mid,mid+1,e);
}

int main(){
    int a[]={1,3,5,2,4,1};
    
    sort(a,0,5);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    // cout<<endl;
    // int b[]={1,2,3,4,2,3,4,5};
    // merge(b,0,3,4,7);
    // for(int i=0;i<8;i++) cout<<a[i]<<" ";
    return 0;
}