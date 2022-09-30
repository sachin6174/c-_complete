#include <iostream>
using namespace std;

void fun(int k[], int n, int ans)// array is passed with name and empty size ,all variables going to be need in function is taken as argument with their data type
// putting for loop directly in the function
{
    
    for (int  i = 0; i < n-1; i++)
    {
        if (k[i]< k[i+1])
        {
            ans++;
            cout<<ans<<" ";
        }
        
    }  

}

int main()
{
    int ans =0;
    int n;
    cin>>n;
    int k[n];
    for(int i=0;i<n;i++)
    { cin>>k[i];}
    fun(k,n,ans);// call just need array name no size// just need function call if return void if it returns something make sure you cout that thing to see value
    if (ans == n-1)
    {
        cout<<"array is sorted"<<endl; 
    //    return true;//true is 1
    }
    else{
        cout<<"array is not sorted"<<endl;
        // return false;// false 0

    }

    return 0;
}