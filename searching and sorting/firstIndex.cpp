#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;

void linersearch_1stFrom_start(int *a,int n,int *x){
    int count=0;

for (auto i = 0; i < n; i++)
{   
    if (a[i]==*x)
    {
        cout<<i<<" ";
        count++;
        break;
    }   
}
if(count==0){
    cout<<"-1";
}


}
void linersearch_1stFrom_last(int *a,int n,int *x){
    int count=0;
    // *x=3; changed and told to search 3
for (auto i = n-1; i>=0; i--)
{   
    if (a[i]==*x)
    {
        cout<<i<<" ";
        count++;
        break;
    }   
}
if(count==0){
    cout<<"-1";
}


}
void linersearch_all(int *a,int n,int *x){
    int count=0;
    // *x=3; changed and told to search 3
for (auto i = 0; i<n; i++)
{   
    if (a[i]==*x)
    {
        cout<<i<<" ";
        count++;
    }   
}
if(count==0){
    cout<<"-1";
}


}

int main()
{
    
    int a[]={2,6,1,6,8,3,6,2,6,0,4,-2};
    int n=sizeof(a)/sizeof(int);
    int x=6;
    linersearch_1stFrom_start(a,n,&x);
    cout<<endl;
    linersearch_1stFrom_last(a,n,&x);
    cout<<endl;
    linersearch_all(a,n,&x);
    
    return 0;
}