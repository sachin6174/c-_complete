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



}







void merge(int *a,int *b,int const n,int const m,int *c){
    int i=0;
    int j=0;
    int k=0;
    while (i<n&&j<m)
    {
        if(a[i]<=b[j]){
            c[k++]=a[i++];
        }else{
            c[k++]=b[j++];
        }
        
    }
    while (i<n)
    {
        c[k++]=a[i++];
    }
    while (j<m)
    {
        c[k++]=a[j++];
    }
    int t=0;
    while (t<m+n)
    {
        cout<<c[t++]<<" ";
    }
    

}
void merge(int *a,int *b,int const n,int const m ){
    int c[n+m];
    return merge(a,b,n,m,c);
}

int main()
{
    

    int a[]={1,2,4,5,7,9};
    int n=sizeof(a)/sizeof(int);
    int b[]={2,3,6,7,8};
    int m=sizeof(b)/sizeof(int);

    merge(a,b,n,m);


    
    return 0;
}