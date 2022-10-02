#include <iostream>
using namespace std;


//int sum(int a[],int sizeofarray);=int sum(int *a,int sizeofarray);

int sum(int a[],int sizeofarray);


int main()
{
    int a[4]={1,2,3,4};
    cout<<sum(a,4)<<endl;
    cout<<sum(a+1,3)<<endl;

    return 0;
}
int sum(int a[],int sizeofarray){
    int ans=0;
    for (int i=0;i<sizeofarray;)
    {
        ans=ans+a[i];
        i++;
    }
    return ans;
}

