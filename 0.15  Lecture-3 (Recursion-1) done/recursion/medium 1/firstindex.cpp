#include <iostream>
//2,147,483,647
using namespace std;

int first_index(int *a, int n, int x){

    if(n==0){ return -1;}
    // if(n==1){ return 0;}// this can not be base case here think why?

    if(a[0]==x){
        return 0;
    }
    int smallans= first_index(a+1,n-1,x);
    if(smallans==-1){
        return -1;
    }
    return smallans+1;

}


int main()
{
    int a[]={1,2,3,4,4,1};
    int n=6;
    cout<<first_index(a,n,4);
    return 0;
}