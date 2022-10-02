#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;

void mergesort (int * merges,int si,int ei){

if(si=ei){
    return ;
}
int mid=(si+ei)/2;
mergesort(merges,si,mid);
mergesort(merges,mid-1,ei);

merge(merges,si,mid,ei);

}

void merge(int ,int *c){
    
    

}
void merge(int *a,int *b,int const n,int const m ){
    int c[n+m];
    return merge(a,b,n,m,c);
}

int main()
{
    int merges[]={2,6,1,6,8,3,6,2,6,0,4,-2};
    int merges_size=sizeof(merges)/sizeof(int);int si=0;
    int ei=merges_size-1;
    mergesort(merges,si,ei);
    return 0;
}