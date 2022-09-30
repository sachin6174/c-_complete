#include <iostream>
using namespace std;

int indexofelement(int array[],int size,int x){
    if (size ==0) { return -1; }
    if (size ==1) { return 0; }
    int ans=0;
    if (array[0]==x)
    {
        return 0;
    }
    
    int p= indexofelement((array+1),size-1, x);
    return p;
      
}

int main()
{
    
    int n;
    cin>>n;
    
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    int x;
    cin >>x;
    
    cout<<indexofelement(array,n,x)<<endl;
    return 0;
}